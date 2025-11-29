@class AWEIMShareLiveMessageViewModel, AWEIMMessageConversation, NSArray;

@interface AWEIMShareLiveCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ didClickFollow;
@property (copy, nonatomic) id /* block */ liveCoverTappedBlock;
@property (copy, nonatomic) id /* block */ cardAvatarTappedBlock;
@property (weak, nonatomic) AWEIMShareLiveMessageViewModel *viewModel;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL enableAvatarClickAction;
@property (copy, nonatomic) NSArray *extendedItems;

- (void).cxx_destruct;

@end
