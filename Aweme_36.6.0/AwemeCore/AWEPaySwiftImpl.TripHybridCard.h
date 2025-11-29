@interface AWEPaySwiftImpl.TripHybridCard : UIView <CJPayLynxViewDelegate> {
    void /* unknown type, empty encoding */ nextAppearAction;
    void /* unknown type, empty encoding */ hybridView;
    void /* unknown type, empty encoding */ uiConfig;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ cardScheme;
    void /* unknown type, empty encoding */ cardStartTimeStampMS;
    void /* unknown type, empty encoding */ suggestedSize;
    void /* unknown type, empty encoding */ preFetchTime;
    void /* unknown type, empty encoding */ vcLoadStartTime;
    void /* unknown type, empty encoding */ isFirstOpen;
    void /* unknown type, empty encoding */ isAppearing;
    void /* unknown type, empty encoding */ isPreload;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
