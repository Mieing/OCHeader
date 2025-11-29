@class MMFinderLiveBubbleInfo;

@interface MMFinderLiveStartGuideBubbleView : MMFinderLiveBottomRightBubbleView

@property (retain, nonatomic) MMFinderLiveBubbleInfo *bubble;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ createAction;

- (id)initWithTaskId:(id)a0 bubble:(id)a1;
- (id)currentTaskId;
- (void)onCloseTapped;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (void).cxx_destruct;

@end
