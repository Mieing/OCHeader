@class MMLiveIconButton, MMFinderLiveTaskId, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveBottomRightBubbleView : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMLiveIconButton *actionButton;
@property (nonatomic) unsigned long long backgroundType;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (id)initWithTaskId:(id)a0;
- (void)initViews;
- (void)onCloseTapped;
- (void)updateActionButton;
- (void)onActionTapped;
- (void)updateTitleLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
