@class NSString, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AFDFastReplyMessageFansStrategy : NSObject <AFDFastReplyBusinessStrategy>

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fastReplyCanShowWithContext:(id)a0;
+ (BOOL)fastReplyRefactorCanShowWithModel:(id)a0 context:(id)a1;

- (id)fastReplyTriggerRule;
- (void)fastReplyDidShow:(id)a0;
- (id)fastReplyPlaceholder;
- (id)fastReplyEmojis;
- (id)fastReplyAvatarURL;
- (id)fastReplyInputMode;
- (id)fastReplyEnterMethod;
- (id)fastReplyShowEvent;
- (id)fastReplyShowParams;
- (id)fastReplyClickEvent;
- (id)fastReplyTrackerClickParamsWithClickType:(unsigned long long)a0 emoji:(id)a1;
- (BOOL)fastReplyShouldPlayEmojiAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
