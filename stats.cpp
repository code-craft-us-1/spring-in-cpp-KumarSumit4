#include "stats.h"
#include <numeric>
#include <cmath>
#include <algorithm>
using namespace Statistics;
 
 
Stats Statistics::ComputeStatistics(const std::vector<float>& input) 
{	
    //Implement statistics here	    //Implement statistics here
 
    Stats stat;
 
    if(input.size()==0)
    {
        stat.average = NAN;
        stat.min = NAN;
        stat.max = NAN;
    }
    else
    {
        stat.average=((float)std::accumulate(input.begin(),input.end(),0.0f))/input.size();
        stat.min =* std::min_element(input.begin(),input.end());
        stat.max =* std::max_element(input.begin(),input.end());
    }
    return stat;
}	

