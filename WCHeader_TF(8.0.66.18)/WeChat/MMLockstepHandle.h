@class LockstepNativeTask;
@protocol MMLockstepHandleReportDelegate;

@interface MMLockstepHandle : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    void *_lockstepMgr;
    struct LockStepScriptState { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; long long x3; } *_lockstepScriptState;
    LockstepNativeTask *lockstepTask;
    struct LockStepCallback { void /* function */ **x0; void *x1; } *m_pCallback;
}

@property (weak, nonatomic) id<MMLockstepHandleReportDelegate> reportDelegate;

- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (void)setConfig:(struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; })a0;
- (void)setLogDelegate:(id)a0;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;

@end
