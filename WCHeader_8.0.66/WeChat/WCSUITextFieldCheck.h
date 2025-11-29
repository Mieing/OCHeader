@interface WCSUITextFieldCheck : MMObject {
    struct shared_ptr<__WCSN::__WCSBCP> { struct __WCSBCP *__ptr_; struct __shared_weak_count *__cntrl_; } check;
    BOOL _tracking;
}

- (id)init;
- (void)dealloc;
- (void)printResult;
- (void)start;
- (void)stop;
- (void)pause;
- (id)getData;
- (void)onBeginEdit:(id)a0;
- (void)onEndEdit:(id)a0;
- (void)onEditChange:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
