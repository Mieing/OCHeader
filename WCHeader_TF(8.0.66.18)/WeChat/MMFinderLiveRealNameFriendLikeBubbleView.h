@interface MMFinderLiveRealNameFriendLikeBubbleView : MMFinderLiveBottomRightBubbleView

@property (copy, nonatomic) id /* block */ likeAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (nonatomic) BOOL isLiked;

- (id)initWithTaskId:(id)a0 closeAction:(id /* block */)a1 likeAction:(id /* block */)a2;
- (void)onCloseTapped;
- (void)updateLiked:(BOOL)a0;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (void).cxx_destruct;

@end
