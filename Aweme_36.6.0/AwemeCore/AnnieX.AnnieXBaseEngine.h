@interface AnnieX.AnnieXBaseEngine : NSObject <AnnieX.IAnnieXEngine> {
    void /* unknown type, empty encoding */ __rts_props;
    void /* unknown type, empty encoding */ engineView;
    void /* unknown type, empty encoding */ __rts_lifecycleDelegate;
}

- (id)getEngineView;
- (void)reloadView:(id)a0;
- (void)sendEvent:(id)a0 :(id)a1;
- (void)onViewAppeared;
- (void)onViewDisappeared;
- (void).cxx_destruct;
- (id)init;
- (void)loadView:(id)a0;

@end
