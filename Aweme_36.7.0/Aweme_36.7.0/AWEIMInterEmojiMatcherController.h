@class AWEIMFormatTriggerMatcher, NSArray, AWEIMSpecialEmojiRelationModel, NSString, AWEIMMessage, NSDictionary, AWEIMAITriggerMatcher, AWEIMMessageExtTriggerMatcher, AWEIMMessageConversation, AWEIMInterEmojiMatcherDelayModel, UIViewController;
@protocol AWEIMTextTriggerMatcherProtocol;

@interface AWEIMInterEmojiMatcherController : NSObject <AWEIMInteractiveEmojiAnimationObservable, AWEIMInterEmojiMatcherDataSource>

@property (weak, nonatomic) AWEIMMessage *lastMessage;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) NSArray *groups;
@property (retain, nonatomic) AWEIMInterEmojiMatcherDelayModel *delayModel;
@property (nonatomic) BOOL isDisplayingDelayAnimation;
@property (retain, nonatomic) AWEIMSpecialEmojiRelationModel *currentPlayModel;
@property (retain, nonatomic) NSDictionary *lastTrackParams;
@property (retain, nonatomic) NSArray *emojiMatchers;
@property (retain, nonatomic) NSArray *animationMatchers;
@property (retain, nonatomic) id<AWEIMTextTriggerMatcherProtocol> textMatcher;
@property (retain, nonatomic) AWEIMMessageExtTriggerMatcher *messageExtMatcher;
@property (retain, nonatomic) AWEIMAITriggerMatcher *aiMatcher;
@property (retain, nonatomic) AWEIMFormatTriggerMatcher *formatMatcher;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRelationEnable:(id)a0;

- (void)didEndPlayAnimation:(id)a0 fromMessages:(id)a1 isPlayFinished:(BOOL)a2 isPlaySuccess:(BOOL)a3;
- (void)p_addObserver;
- (BOOL)tryMatchWithLastMessage:(id)a0 inConversation:(id)a1 withGroups:(id)a2 force:(BOOL)a3;
- (BOOL)p_doMatchWithForce:(BOOL)a0;
- (void)p_doRealTrackFromMessages:(id)a0 success:(BOOL)a1;
- (void)p_tryPlaySpecialAnimation:(id)a0 withMatcher:(id)a1 force:(BOOL)a2;
- (BOOL)p_doMatchInterEmojiWithForce:(BOOL)a0;
- (BOOL)p_doMatchTextTrigger;
- (id)p_tryMatchEmojis;
- (id)p_findAnimationToDisplay:(id)a0;
- (id)p_tryMatchTexts;
- (void)p_tryPlayTextAnimation:(id)a0 withMatcher:(id)a1;
- (void)breakAnimation;
- (void)p_realSpecialAnimationPlay:(id)a0 withMatcher:(id)a1;
- (void)p_realTextTriggerAnimationPlay:(id)a0 withMatcher:(id)a1;
- (void)p_trackSpecialAnimationPlay:(id)a0 withMatcher:(id)a1 fromMessages:(id)a2;
- (id)p_onView;
- (void)p_trackTextAnimationPlay:(id)a0 withMatcher:(id)a1;
- (void)p_doRealTrackTextAnimation:(id)a0;
- (void)p_doRealTrackSpecialAnimationFromMessages:(id)a0 success:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
