@class UIView, NSString, WCCanvasRandomLayoutEncorePickInfo;

@interface WCCanvasRandomPickCardButtonView : MMUIButton <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *encoreInfo;
@property (retain, nonatomic) UIView *backgroundRadiusView;
@property (retain, nonatomic) UIView *highlightedCoverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcButtonViewSizeWithEncoreInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 encoreInfo:(id)a1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)generateSubviews;
- (void)setButtonImage:(id)a0;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
