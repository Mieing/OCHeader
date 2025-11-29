@class AWEECOMIMRateServiceModel, NSString, NSDictionary, NSNumber, BDECPigeonReferMessageInfo;
@protocol BDECPigeonMessageInterface;

@interface AWEECOMIMPaasMessageBridgeNew : NSObject <AWEECOMIMPaasMessageBridgeProtocol>

@property (retain, nonatomic) id<BDECPigeonMessageInterface> pigeonMessage;
@property (readonly, copy, nonatomic) NSString *belongingBizConversationIdentifier;
@property (readonly, nonatomic) long long senderRoleType;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, copy, nonatomic) NSString *hintContentCustomer;
@property (readonly, nonatomic) long long sharkState;
@property (readonly, nonatomic) NSNumber *indexInConversation;
@property (readonly, nonatomic) long long indexInConversationV2;
@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *serverMessageID;
@property (readonly, nonatomic) NSString *clientMessageIDInExt;
@property (readonly, nonatomic) NSString *bizConversationID;
@property (readonly, nonatomic) BOOL isRiskControlled;
@property (readonly, copy, nonatomic) NSString *riskControlledContent;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *receiverSpecialContent;
@property (readonly, copy, nonatomic) NSString *sharkSpecialContent;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSString *pigeonMessageType;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, nonatomic) NSString *recalledTime;
@property (readonly, copy, nonatomic) NSString *talkId;
@property (readonly, nonatomic) long long messageStatus;
@property (readonly, nonatomic) NSString *customerHint;
@property (copy, nonatomic) NSString *sender;
@property (readonly, nonatomic) BOOL isSelf;
@property (readonly) NSDictionary *syncedExt;
@property (readonly) NSDictionary *syncedExtInternal;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, nonatomic) NSString *createTime;
@property (readonly, nonatomic) BDECPigeonReferMessageInfo *referMessageInfo;
@property (readonly, copy, nonatomic) NSNumber *indexInPigeonConversation;
@property (readonly, copy, nonatomic) NSDictionary *msgRenderModel;
@property (readonly, copy, nonatomic) NSDictionary *renderBody;
@property (readonly, copy, nonatomic) NSString *subCardType;
@property (copy, nonatomic) NSString *localMediaFilePath;
@property (retain, nonatomic) AWEECOMIMRateServiceModel *rateServiceModel;
@property (nonatomic) BOOL isRecalledByShark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithPigeonMessage:(id)a0;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)setLocalExtEntry:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)deleteWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateMessageBody:(id)a0 completion:(id /* block */)a1;
- (id)objectFromExtForKey:(id)a0;
- (id)initMessageWithIdentifier:(id)a0 inConversation:(id)a1 belongClient:(id)a2;
- (id)initMessageWithMessageServerID:(id)a0 inConversation:(id)a1 belongClient:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
