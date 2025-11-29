@interface AWECommentCellViewModel : NSObject <AWECommentNewFeedCellViewModelProtocol, AWERLComponentContainerDelegate> {
    void /* unknown type, empty encoding */ commentModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ msgSender;
    void /* unknown type, empty encoding */ component2;
    void /* unknown type, empty encoding */ componentContainer;
    void /* unknown type, empty encoding */ needReCalculate;
    void /* unknown type, empty encoding */ bgHighLightAnimateDuration;
    void /* unknown type, empty encoding */ reLayoutAction;
    void /* unknown type, empty encoding */ forceRefresh;
    void /* unknown type, empty encoding */ themeReloadAction;
    void /* unknown type, empty encoding */ initialSize;
    void /* unknown type, empty encoding */ preCheckForceRefresh;
    void /* unknown type, empty encoding */ flattenedComponentsArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableFixEditCommentCellLayoutBugFallback;
}

- (void)renderOn:(id)a0;
- (void)preCalculate;
- (void)setCommentCellTextConfig:(id)a0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)componentContainer:(id)a0 changeBoundsToSize:(struct CGSize { double x0; double x1; })a1;
- (void)onAWEUIThemeChange;
- (void)addDebugView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
