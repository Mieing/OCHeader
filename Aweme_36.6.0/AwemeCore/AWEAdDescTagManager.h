@protocol AWECommerceComponentContext;

@interface AWEAdDescTagManager : NSObject <AWEBDARifleViewPopupEventProtocol, AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ descDidClickHandler;
    void /* unknown type, empty encoding */ tagModel;
    void /* unknown type, empty encoding */ isLynxPopupFullScreen;
    void /* unknown type, empty encoding */ isLynxPopupDisAppear;
    void /* unknown type, empty encoding */ lynxPopupMaxHeight;
}

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)willOpenPopupView;
- (void)maskView:(id)a0;
- (void)rifleView:(id)a0 didEnterStatus:(unsigned long long)a1;
- (void)rifleView:(id)a0 closeWithParams:(id)a1;
- (void)loadFailed:(id)a0;
- (void)loadFinish:(id)a0;
- (void)handleViewDidAppear:(id)a0;
- (void)handleViewDidDisappear:(id)a0;
- (void)rifleView:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
