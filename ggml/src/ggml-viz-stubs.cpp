// Stub implementations for GGML visualization hooks
// These will be replaced by the actual hook library when loaded via DYLD_INSERT_LIBRARIES

extern "C" {
    __attribute__((weak)) void ggml_viz_hook_graph_compute_begin(const struct ggml_cgraph* graph, const struct ggml_backend* backend) {
        // Stub - will be replaced by injected library
        (void)graph;
        (void)backend;
    }

    __attribute__((weak)) void ggml_viz_hook_graph_compute_end(const struct ggml_cgraph* graph, const struct ggml_backend* backend) {
        // Stub - will be replaced by injected library
        (void)graph;
        (void)backend;
    }

    __attribute__((weak)) void ggml_viz_hook_op_compute_begin(const struct ggml_tensor* tensor, const struct ggml_backend* backend) {
        // Stub - will be replaced by injected library
        (void)tensor;
        (void)backend;
    }

    __attribute__((weak)) void ggml_viz_hook_op_compute_end(const struct ggml_tensor* tensor, const struct ggml_backend* backend) {
        // Stub - will be replaced by injected library
        (void)tensor;
        (void)backend;
    }
}