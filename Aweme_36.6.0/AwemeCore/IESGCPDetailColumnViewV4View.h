@class NSString, UIView;

@interface IESGCPDetailColumnViewV4View : IESGCPDetailColumnView <IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIView *contentBgView;
@property (nonatomic) struct CGSize { double width; double height; } contentBgViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)floatImageAnimationTriggerWithProgress:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })columnViewContentInset;
- (void)layoutBackgroundView;
- (BOOL)shouldShowBgColor;
- (BOOL)hasFullScreenVendorImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupBackgroundView;

@end
