@class AWEIMMessageConversation;

@interface AWEIMEmoticonPanelTabInitContext : NSObject

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isCompanyChat;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) BOOL isShowingInImageVideoDisplayViewController;
@property (nonatomic) BOOL isShowingInFeedDetailViewController;
@property (nonatomic) BOOL shouldFilterAIStyle;
@property (nonatomic) BOOL shouldFilterSubscribe;
@property (readonly, nonatomic) BOOL onlyDefaultEmoji;

- (void).cxx_destruct;

@end
