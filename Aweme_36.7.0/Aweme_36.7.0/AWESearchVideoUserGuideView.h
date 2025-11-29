@class NSString, LOTAnimationView, NSDictionary, UILabel;

@interface AWESearchVideoUserGuideView : UIView <AWESearchUserGuideViewProtocol>

@property (retain, nonatomic) LOTAnimationView *userGuideLOTView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) BOOL hasDismiss;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *keyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpSubViews;
- (void)dismissWithClick:(BOOL)a0;
- (void)trackUserGuideViewShow;
- (void)trackUserGuideViewDismissWithClick:(BOOL)a0;
- (void).cxx_destruct;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
