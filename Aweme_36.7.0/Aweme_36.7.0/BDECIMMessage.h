@class NSString, BDECIMClient, NSDictionary, NSDate, NSNumber;
@protocol BDECIMCloudMessageInterface;

@interface BDECIMMessage : NSObject

@property (retain, nonatomic) id<BDECIMCloudMessageInterface> message;
@property (retain, nonatomic) BDECIMClient *client;
@property (readonly, nonatomic) NSNumber *indexInConversation;
@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *serverMessageID;
@property (readonly, nonatomic) NSString *clientMessageIDInExt;
@property (readonly, nonatomic) NSString *bizConversationID;
@property (copy, nonatomic) NSString *sender;
@property (readonly, nonatomic) BOOL isSelf;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *receiverSpecialContent;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSString *pigeonMessageType;
@property (readonly, copy, nonatomic) NSString *bizRole;
@property (readonly) NSDate *createdAt;
@property (readonly, nonatomic) BOOL hideAndShowUpgrade;
@property (readonly, copy, nonatomic) NSString *hintContent;
@property (readonly, nonatomic) BOOL isRiskControlled;
@property (readonly, copy, nonatomic) NSString *riskControlledContent;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *src;
@property (readonly, copy, nonatomic) NSString *visibilityType;
@property (copy, nonatomic) NSString *csSpecialContent;
@property (readonly, copy, nonatomic) NSString *srcUserId;
@property (readonly, copy, nonatomic) NSString *talkId;
@property (readonly, nonatomic) NSString *createTime;
@property (readonly, nonatomic) NSString *srcCreateTime;
@property (readonly, nonatomic) NSString *wsCreateTime;
@property (readonly, nonatomic) long long messageStatus;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, nonatomic) NSString *recalledTime;
@property (readonly, nonatomic) BOOL robotAutoAnswer;
@property (readonly, nonatomic) BOOL frontendNeedHidden;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;
@property (readonly, copy, nonatomic) NSString *removeTips;
@property (readonly, nonatomic) NSString *customerHint;
@property (readonly, nonatomic) BOOL isWelcomeSystemMessage;
@property (readonly, nonatomic) BOOL isCustomerServiceAccessMessage;
@property (readonly, nonatomic) BOOL isOffLineStartMessage;
@property (readonly, copy, nonatomic) NSString *serviceAttitude;
@property (readonly, copy, nonatomic) NSString *serviceAttitudeAsynAlertContent;
@property (readonly) NSDictionary *syncedExt;
@property (readonly) NSDictionary *syncedExtInternal;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)setLocalExtEntry:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (id)belongingConversationIdentifier;
- (void)updateMessageBody:(id)a0 completion:(id /* block */)a1;
- (BOOL)hitOtherSharkAction;
- (id)realTimeRiskContent;
- (id)initMessageWithIdentifier:(id)a0 inConversation:(id)a1 belongeClient:(id)a2;
- (id)initMessageWithIdentifier:(id)a0 inConversation:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
