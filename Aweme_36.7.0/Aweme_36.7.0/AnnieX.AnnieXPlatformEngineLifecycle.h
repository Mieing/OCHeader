@interface AnnieX.AnnieXPlatformEngineLifecycle : NSObject {
    void /* unknown type, empty encoding */ __rts_lifecycle;
}

- (void)onLoadStart:(id)a0;
- (void)onLoadSucceed:(id)a0 url:(id)a1;
- (void)onLoadFailed:(id)a0 error:(id)a1;
- (void)onReceivedTitle:(id)a0 title:(id)a1;
- (void)onPageNavigateStart:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
