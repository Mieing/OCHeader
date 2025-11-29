@class MMTimer, MMMsgContentTipsItem;

@interface MMMsgCommonTipsView : TipsView

@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL shouldDisableAccessibility;
@property (retain, nonatomic) MMMsgContentTipsItem *item;

+ (id)tipsViewForTipsItem:(id)a0 delegate:(id)a1;

- (void)dealloc;
- (void)hideAfterDuration:(double)a0;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animatedShowInMsgContent;
- (void)animatedHideInMsgContent;
- (double)heightToFitWidth:(double)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (void)showOrHideExpandView;
- (void).cxx_destruct;

@end
