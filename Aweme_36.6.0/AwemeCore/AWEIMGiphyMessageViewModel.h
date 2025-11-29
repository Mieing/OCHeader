@class AWEIMMessageConversation;

@interface AWEIMGiphyMessageViewModel : AWEIMMessageViewModel {
    AWEIMMessageConversation *_conversation;
}

@property (nonatomic) BOOL isRandomInteractiveEmoji;
@property (nonatomic) BOOL shouldShowRandomInteractiveEmojiAnimation;
@property (nonatomic) BOOL shouldShowRandomInteractiveEmojiPK;
@property (nonatomic) BOOL shouldMirrorEmoji;
@property (nonatomic) BOOL shouldMirrorEmojiResolved;
@property (nonatomic) BOOL didShowRandomInteractiveEmojiPKThisLifeCycle;

- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (void)setupWithMessage:(id)a0;
- (void)didShowRandomInteractiveEmojiAnimation;
- (void)setupRandomInteractiveEmoji;
- (void)__registerRandomInteractiveEmojiMessageIfNeed;
- (void)__logOffRandomInteractiveEmojiMessageIfNeed;
- (void)willDeleteMessage;
- (void)willRecallMessage;
- (void)willResendMessage;
- (void)leftSwipeReplyBegin;
- (void)leftSwipeReplyViewWillAppear;
- (void)__updateRandomInteractiveEmojiPK;
- (void)leftSwipeReplyViewDidAppear;
- (void)leftSwipeReplyViewWillDisappear;
- (void)leftSwipeReplyViewDidDisappear;
- (void)leftSwipeReplyEnd;
- (BOOL)__checkRandomInteractiveEmoji;
- (BOOL)__shouldRegisterRandomInteractiveEmoji;
- (void)didShowRandomInteractiveEmojiPK;
- (void)didTapRandomInteractiveEmojiPK;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;
- (void)setConversation:(id)a0;

@end
