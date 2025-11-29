@class AWEIMMessageConversation, NSString, AWEIMLightInteractionConfig, NSURL, UIImage, AWEIMMessage;
@protocol AWEIMGiphyReplyComponent;

@interface AWEIMLightInteractionMessageReplyComponent : AWEIMComponentBase <AWEIMLightInteractionMessageReplyComponent>

@property (nonatomic) long long lastShowPullIndex;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *iconTitle;
@property (retain, nonatomic) UIImage *iconPlaceholder;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMLightInteractionConfig *config;
@property (retain, nonatomic) AWEIMMessage *targetMsg;
@property (weak, nonatomic) id<AWEIMGiphyReplyComponent> giphyReplyComponent;
@property (readonly, nonatomic) BOOL isButtonShowing;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)canShowRelpyButton:(id)a0;
- (id)messageViewController;
- (void)clearLastShowPullIndex;
- (void)didPressedReplyButton;
- (id)emojiImageNameWithKey:(id)a0;
- (void).cxx_destruct;

@end
