The main goal of this work is to understand and implement a Two-Level Adaptive Branch Predictor 
using the SimpleScalar 3.0 simulator framework. Branch prediction is a critical aspect of modern 
CPU design, where the processor predicts the direction of conditional branches to improve 
instruction-level parallelism and overall pipeline efficiency.

In this project, we modified and extended the branch prediction module (bpred.c, bpred.h) and the 
simulation driver (sim-bpred.c) to add support for new configurations and experimental tracking of
confidence-based prediction metrics. Several experiments were run using standard benchmark programs 
such as compress95, anagram, cc1, and go. The predictor’s performance was analyzed in terms of 
parameters like address hits, direction hits, and miss rate before and after modification.

The experimental results demonstrated the impact of our modifications on branch prediction efficiency. 
By tuning predictor parameters such as history table size, prediction bits, and confidence mechanisms,
we observed noticeable variations in direction and address prediction rates. This hands-on implementation
provided a deeper understanding of dynamic branch predictors, design trade-offs, and the importance of
accurate speculation in high-performance computing systems.

