@class NSString, NSDictionary, LSIMSendMessage, LSIMBizConversation, BDECPigeonMessage, NSNumber;

@interface LSIMBizMessage : NSObject <LSIMMessageProperty>

@property (retain, nonatomic) BDECPigeonMessage *message;
@property (nonatomic) BOOL isSendMessage;
@property (nonatomic) long long statusBeObserved;
@property (copy, nonatomic) NSDictionary *bulletTemplateData;
@property (copy, nonatomic) NSDictionary *bulletStaticData;
@property (readonly, weak, nonatomic) LSIMBizConversation *conversation;
@property (readonly, nonatomic) LSIMSendMessage *sendMessage;
@property (retain, nonatomic) id sendExt;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSString *customClientMsgID;
@property (readonly, copy, nonatomic) NSDictionary *rawBizData;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *serverMsgID;
@property (readonly, copy, nonatomic) NSNumber *indexInConversation;
@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly) NSString *customerHint;
@property (readonly, copy, nonatomic) NSString *pigeonMessageType;
@property (readonly, copy, nonatomic) NSString *createTime;
@property (readonly, nonatomic) long long messageStatus;
@property (readonly, nonatomic) long long senderRoleType;
@property (readonly, copy, nonatomic) NSString *visibilityType;
@property (readonly, copy, nonatomic) NSString *src;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *removeTips;
@property (readonly, nonatomic) BOOL hideAndShowUpgrade;
@property (readonly, copy, nonatomic) NSString *hideUpgrade;
@property (readonly, copy, nonatomic) NSString *hintContent;
@property (readonly, nonatomic) BOOL isRiskControlled;
@property (readonly, copy, nonatomic) NSString *riskControlledContent;
@property (readonly, nonatomic) long long riskCodeFromSixin;
@property (readonly, copy, nonatomic) NSString *riskControlledContentFromSixin;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, copy, nonatomic) NSString *bizRole;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messagesWithMessages:(id)a0 inConversation:(id)a1;
+ (id)messageWithMessage:(id)a0 inConversation:(id)a1;
+ (id)messageWithMessageId:(id)a0 inConversation:(id)a1;
+ (id)messageWithSendMessage:(id)a0 inConversation:(id)a1;

- (void)bindPigeonMessage:(id)a0;
- (void)registerMessageUpdateNotification;
- (void)deregisterMessageUpdateNotification;
- (void)p_dataBind;
- (long long)riskContentVisibilityType;
- (id)riskControlledContentFromLife;
- (id)ungzipJsonWithString:(id)a0;
- (void)messageDidUpdated:(id)a0;
- (void)updateMessageWithMessage:(id)a0;
- (void)p_trackMessageSendResult:(BOOL)a0 duration:(unsigned long long)a1;
- (id)defaultTrackerParams;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithConversation:(id)a0;
- (BOOL)isEqualToMessage:(id)a0;

@end
