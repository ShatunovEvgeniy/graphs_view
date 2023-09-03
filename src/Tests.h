#ifndef TESTS_H
#define TESTS_H

#include "graph_views.h"
#include "container_couts.h"

void test1()
{
    Adjacency_list_vec graph(std::vector<std::vector<size_t>>{{1,2,4},  //v0
        {0,1,2,2},//v1
        {2},      //v2
        {},       //v3
        {},       //v4
        {},       //v5
    });

    std::cout << "Test 1" << std::endl;
    std::cout << "All graph:" << std::endl << graph << std::endl;

    auto print_adj = [&graph](int v){
        std::cout << "Print adj for v" << v << std::endl;
        for(int u : graph[v])
            std::cout << v << "->" << u << std::endl;
    };

    print_adj(0);
    print_adj(2);

    auto print_vertex_has_out_edges = [&graph](){
        std::cout << "print_vertex_has_out_edges ";
        for(int v = 0; v < graph.size() ; ++v)
            if(!graph[v].empty())
                std::cout << v << ' ';
        std::cout << std::endl;
    };

    print_vertex_has_out_edges();

//    auto print_isolated_vertex = [&](){
//        std::cout << "print_isolated_vertex ";
//        std::unordered_set<int> vertexes_in_adj_lists;
//        for(auto &adj_list : g)
//            vertexes_in_adj_lists.insert(adj_list.begin(),adj_list.end());
//        for(int v = 0 ; v < g.size() ; ++v)
//            if(!vertexes_in_adj_lists.count(v))
//                std::cout << v << " ";
//        std::cout << std::endl;
//    };

//    print_isolated_vertex();

//    auto get_isolated_vertex = [&g](){
//        std::unordered_set<int> vertexes_in_adj_lists;
//        for(auto &adj_list : g)
//            vertexes_in_adj_lists.insert(adj_list.begin(),adj_list.end());
//        std::unordered_set<int> isolated_vertex;
//        for(int v = 0 ; v < g.size() ; ++v)
//            if(!vertexes_in_adj_lists.count(v))
//                isolated_vertex.insert(v);
//        return isolated_vertex;
//    };

//    std::cout << get_isolated_vertex() << std::endl;


//    auto get_isolated_vertex1 = [](const auto &g){
//        std::unordered_set<int> vertexes_in_adj_lists;
//        for(auto &adj_list : g)
//            vertexes_in_adj_lists.insert(adj_list.begin(),adj_list.end());
//        std::unordered_set<int> isolated_vertex;
//        for(int v = 0 ; v < g.size() ; ++v)
//            if(!vertexes_in_adj_lists.count(v))
//                isolated_vertex.insert(v);
//        return isolated_vertex;
//    };

//    std::cout << get_isolated_vertex1(g) << std::endl;

//    auto get_vertex_with_k_out_edges = [](const auto &g,int k){
//        std::unordered_set<int> vertex_with_k_out_edges;
//        for(int v = 0 ; v < g.size() ; ++v)
//            if(g[v].size() == k)
//                vertex_with_k_out_edges.insert(v);
//        return vertex_with_k_out_edges;
//    };

//    std::cout << get_vertex_with_k_out_edges(g,4) << std::endl;
//    for(int k = 0 ; k < 5 ; ++k)
//        std::cout << "k=" << k << " vs=" << get_vertex_with_k_out_edges(g,k) << std::endl;

//}
}
//void test2()
//{
//    std::vector<std::unordered_set<int>> g = {{1,2,4},  //v0
//        {0,1,2,2},//v1
//        {2},      //v2
//        {},       //v3
//        {},       //v4
//        {},       //v5
//    };
//    std::cout << "test2" << std::endl;
//    std::cout << "g=" << g << std::endl;
//    auto print_adj = [&g](int v){
//        std::cout << "print_adj for v" << v << std::endl;
//        for(int u : g[v])
//            std::cout << v << "->" << u << std::endl;
//    };

//    print_adj(0);
//    print_adj(2);

//}

//void test3()
//{
//    std::vector<std::vector<int>> g = {{1,2,4},  //v0
//        {0,1,2,2},//v1
//        {2},      //v2
//        {},       //v3
//        {},       //v4
//        {},       //v5
//    };
//    std::vector<std::vector<int>> w0= {{10,20,40},  //v0
//        {0,10,20,20},//v1
//        {20},        //v2
//        {},          //v3
//        {},          //v4
//        {},          //v5
//    };
//    std::vector<std::vector<std::string>> w1= {{"Hello","-20","World"},  //v0
//        {"0","World","-20","-20"},//v1
//        {"Hi"},        //v2
//        {},          //v3
//        {},          //v4
//        {},          //v5
//    };
//    std::vector<std::vector<double>> w2;//function(v,u)


//    std::vector<std::vector<std::string>> w3= {{"","",""},  //v0
//        {"","","",""},//v1
//        {""},        //v2
//        {},          //v3
//        {},          //v4
//        {},          //v5
//    };


//    std::cout << "test3" << std::endl;
//    std::cout << "all graph " << g << std::endl;

//    for(int v = 0; v < g.size()/* == w0.size() == w1.size()*/ ; ++v)
//    {
//        std::std::cout << "v = " << v << std::endl;
//        for(int iu = 0 ; iu < g[v].size() ; ++iu)
//        {
//            int u = g[v][iu];//adg vertex
//            int w_0 = w0[v][iu];//weight1 of edge v->u
//            const std::string &w_1 = w1[v][iu];
//            std::cout << "    iu=" << iu << " u=" << u << " w_0=" << w_0 << " w_1=" << w_1 << std::endl;
//        }
//    }
//    std::cout << std::endl;
//    for(int v = 0; v < g.size()/* == w0.size() == w1.size()*/ ; ++v)
//    {
//        for(int iu = 0 ; iu < g[v].size() ; ++iu)
//        {
//            int u = g[v][iu];//adg vertex
//            int w_0 = w0[v][iu];//weight1 of edge v->u
//            const std::string &w_1 = w1[v][iu];
//            std::cout << v << "->" << u << " w_0=" << w_0 << " w_1=" << w_1 << std::endl;
//        }
//    }

//    for(int v = 0; v < g.size()/* == w0.size() == w1.size()*/ ; ++v)
//    {
//        w2.push_back({});
//        for(int iu = 0 ; iu < g[v].size() ; ++iu)
//        {
//            int u = g[v][iu];//adg vertex
//            w2[v].push_back((v + u)*(v+u));
//        }
//    }
//    std::cout << std::endl;
//    std::cout << g << std::endl;
//    std::cout << w2 << std::endl;
//    std::cout << std::endl;


//    for(int v = 0; v < g.size()/* == w0.size() == w1.size() == w3.size()*/ ; ++v)
//    {
//        for(int iu = 0 ; iu < g[v].size() ; ++iu)
//        {
//            int u = g[v][iu];//adg vertex
//            char c = 'A' + u;
//            w3[v][iu] = std::string("Weight") + c;
//        }
//    }

//    std::cout << g << std::endl;
//    std::cout << w3 << std::endl;
//    std::cout << std::endl;

//}

//struct test_4_V_U
//{
//    int u;//adj_vertex
//    int w1 = 0;
//    std::string w2 = "";
//    double w3 = 0;
//    friend std::ostream & operator << (std::ostream &ost,test_4_V_U v)
//    {
//        ost << '[' << "u=" << v.u << " w1=" << v.w1 << " w2=" << v.w2 << " w3=" << v.w3 << ']';
//        return ost;
//    }
//};

//void test4()
//{
//    using V_U = test_4_V_U;
//    std::vector<std::vector<V_U>> g = {{{/*u=*/1,/*w1=*/34,/*w2=*/"Hello",/*w3=*/10.0},{/*u=*/2,/*w1=*/7},{/*u=*/4}          },  //v0
//        {{/*u=*/0},                                     {/*u=*/1},{/*u=*/2},{/*u=*/2}},//v1
//        {{/*u=*/2}                                                                   },      //v2
//        {},       //v3
//        {},       //v4
//        {},       //v5
//    };
//    std::cout << "test4" << std::endl;
//    std::cout << g << std::endl;
//    std::cout << std::endl;
//    for(int v = 0; v < g.size() ; ++v)
//        for(auto &e : g[v])
//            std::cout << "v="<< v << " " << e << std::endl;

//}

//void test5()
//{
//    std::vector<std::unordered_map<int,int>> g = {{{1,-5},{2,7},{4,3}},  //v0
//        {{0,0},{1,-3},{2,2},{2,6}},//v1
//        {{2,4}},      //v2
//        {},       //v3
//        {},       //v4
//        {},       //v5
//    };
//    std::cout << "test5" << std::endl;
//    std::cout << g << std::endl;;
//}

void test6()
{
    std::vector<std::vector<int>> g0 = {{1,2,4},  //v0
        {0,1,2,2},//v1
        {2},      //v2
        {},       //v3
        {},       //v4
        {},       //v5
    };
    std::vector<std::unordered_set<int>> g1 = {{1,2,4},  //v0
        {0,1,2,2},//v1
        {2},      //v2
        {},       //v3
        {},       //v4
        {},       //v5
    };

    std::vector<std::vector<int>> g2 = {{0,1,1,0,1,0},//v0
        {1,1,1,0,0,0},//v1
        {0,0,1,0,0,0},//v2
        {0,0,0,0,0,0},//v3
        {0,0,0,0,0,0},//v4
        {0,0,0,0,0,0},//v5
    };
    int ng3 = 6;
    std::vector<std::pair<int,int>> g3 = {{0,1},{0,2},{0,4},{1,0},{1,1},{1,2},{1,2},{2,2}};

//}

#endif // TESTS_H
