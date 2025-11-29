@class MMFinderLiveBubbleInfo;

@interface MMFinderLiveNextLiveNotificationBubbleView : MMFinderLiveBottomRightBubbleView

@property (copy, nonatomic) id /* block */ reserveAction;
@property (retain, nonatomic) MMFinderLiveBubbleInfo *nextLiveBubbleInfo;
@property (copy, nonatomic) id /* block */ closeAction;
@property (nonatomic) BOOL isReserved;

- (id)initWithTaskId:(id)a0 nextLiveBubbleInfo:(id)a1 closeAction:(id /* block */)a2 reserveAction:(id /* block */)a3;
- (void)onCloseTapped;
- (void)updateReserved:(BOOL)a0 buttonTitle:(id)a1;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (void).cxx_destruct;

@end
