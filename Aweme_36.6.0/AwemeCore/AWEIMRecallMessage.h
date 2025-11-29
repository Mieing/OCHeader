@class NSString, AWEIMTextMessage;

@interface AWEIMRecallMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (readonly, nonatomic) double recalledTime;
@property (copy, nonatomic) NSString *recallUserID;
@property (copy, nonatomic) NSString *recallConversationID;
@property (copy, nonatomic) NSString *recallUserNickname;
@property (readonly, nonatomic) BOOL recalledBySender;
@property unsigned long long recallerRole;
@property (retain, nonatomic) AWEIMTextMessage *recalledMsg;
@property (nonatomic) BOOL isSendFromSilverWing;
@property (copy, nonatomic) NSString *customRecallText;
@property (nonatomic) long long recalledAweType;
@property (nonatomic) long long originMessageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllCache;
+ (void)cacheRecalledTime:(double)a0 message:(id)a1;
+ (double)memoryCacheForRecalledTimeWithMessageID:(id)a0;
+ (void)setMemoryCacheForRecalledTime:(double)a0 messageID:(id)a1;
+ (id)recalledTimeCache;

- (id)attributedContent;
- (long long)realMessageType;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (long long)deletedAfterDisplayType;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (id)pluginsComponentsName;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isRecallMessageShouldUseUserTemplate;
- (id)p_recallContent;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;

@end
