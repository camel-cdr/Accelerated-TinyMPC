#pragma once

#include "types.hpp"

#ifdef __cplusplus
extern "C"
{
#endif

    int tiny_solve(TinySolver *solver , double *forward_pass_time , double* update_slack_time ,double *update_dual_time, double *update_linear_cost_time);
    void tiny_init(TinySolver *solver);

    void update_primal(TinySolver *solver);
    void backward_pass_grad(TinySolver *solver);
    void forward_pass(TinySolver *solver);
    void update_slack(TinySolver *solver);
    void update_dual(TinySolver *solver);
    void update_linear_cost(TinySolver *solver);

#ifdef __cplusplus
}
#endif