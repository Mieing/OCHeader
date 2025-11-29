@class NSString, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AFDFastReplyFamiliarCommentStrategy : NSObject <AFDFastReplyBusinessStrategy>

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (copy, nonatomic) NSString *triggerRuler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fastReplyCanShowWithContext:(id)a0;
+ (BOOL)fastReplyRefactorCanShowWithModel:(id)a0 context:(id)a1;
+ (void)generateDormancyConfig:(id)a0;
+ (BOOL)isCommentReply;
+ (unsigned long long)inputViewType;

- (id)fastReplyTriggerRule;
- (void)fastReplyDidShow:(id)a0;
- (void)fastReplyDidClickedWithType:(unsigned long long)a0 emoji:(id)a1;
- (void)fastReplyDidDismiss;
- (void)fastReplyDidSend;
- (id)fastReplyPlaceholder;
- (id)fastReplyEmojis;
- (id)fastReplyAvatarURL;
- (id)fastReplyEnterMethod;
- (id)fastReplyShowEvent;
- (id)fastReplyShowParams;
- (id)fastReplyClickEvent;
- (id)fastReplyTrackerClickParamsWithClickType:(unsigned long long)a0 emoji:(id)a1;
- (id)fastReplyStaticAvatar;
- (id)buttonInfo;
- (id)p_getFastCommentType;
- (id)p_getFastCommentEmojiStrategy;
- (id)trackerBasicParams;
- (id)trackerClickCustomParamsWithClickType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
