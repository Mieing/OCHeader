@class NSString, LOTAnimationView, NSDictionary, UILabel;

@interface AWESearchFeedVideoUserGuideView : UIView <AWESearchUserGuideViewProtocol>

@property (retain, nonatomic) LOTAnimationView *userGuideLOTView;
@property (retain, nonatomic) UILabel *guideLabelLeft;
@property (retain, nonatomic) UILabel *guideLabelRight;
@property (nonatomic) BOOL hasDismiss;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *keyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpSubViews;
- (void)dismissWithClick:(BOOL)a0;
- (void)updateWithKeyword:(id)a0;
- (void)trackUserGuideViewShow;
- (void)trackUserGuideViewDismiss;
- (void)dismiss;
- (void).cxx_destruct;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
