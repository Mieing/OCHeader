@interface AWETemplateCellViewModel : NSObject <AWERLComponentContainerDelegate, AWECommentTemplateCellViewModel> {
    void /* function */ userAction;
    void /* unknown type, empty encoding */ viewModelManager;
    void /* function */ cellLayoutUpdate;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ msgSender;
    void /* unknown type, empty encoding */ component;
    void /* unknown type, empty encoding */ noticeComponent;
    void /* unknown type, empty encoding */ componentContainer;
    void /* unknown type, empty encoding */ needReCalculate;
    void /* unknown type, empty encoding */ forceRefresh;
    void /* unknown type, empty encoding */ initialSize;
    void /* unknown type, empty encoding */ preCheckForceRefresh;
}

@property (nonatomic, copy) id /* block */ userAction;
@property (nonatomic, copy) id /* block */ cellLayoutUpdate;

- (void)componentContainer:(id)a0 changeBoundsToSize:(struct CGSize { double x0; double x1; })a1;
- (void)renderOnCollectionCell:(id)a0;
- (void)renderOnTableCell:(id)a0;
- (void)renderingViewWillDisplay;
- (void)renderingViewDidEndDisplay;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)calculateSize;

@end
