@class UIColor, MMLoadingIndicatorView, NSString, UIView;

@interface MMFinderLivePkTaskedBonusBarResultPendingContentView : UIView <MMFinderLivePkTaskedBonusBarContentView>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLoadingIndicatorView *indicatorView;
@property (readonly, nonatomic) UIColor *contentShadowColor;
@property (readonly, nonatomic) NSString *currentPreferredGiftId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
