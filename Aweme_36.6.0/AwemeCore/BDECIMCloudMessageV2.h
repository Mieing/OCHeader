@class NSDate, NSString, TIMXOMessage, BDECPigeonClientConfigV2, BDECPigeonReferMessageInfo, NSDictionary, NSMutableSet, NSNumber;

@interface BDECIMCloudMessageV2 : NSObject <BDECIMCloudMessageV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXOMessage *message;
@property (retain, nonatomic) NSMutableSet *bindingSet;
@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, nonatomic) NSNumber *indexInConversation;
@property (readonly, nonatomic) long long indexInConversationV2;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSNumber *serverMessageID;
@property (readonly, nonatomic) NSDictionary *syncedExtInternal;
@property (readonly, nonatomic) NSString *belongingConversationIdentifier;
@property (readonly, nonatomic) unsigned long long conversationType;
@property (readonly, nonatomic) long long sender;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long belongingSubConvShortID;
@property (readonly, nonatomic) NSDictionary *syncedExt;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, nonatomic) NSDictionary *content;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) BDECPigeonReferMessageInfo *referMessageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)setLocalExtEntry:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)setLocalExtWithKeys:(id)a0 values:(id)a1 completion:(id /* block */)a2;
- (void)deleteWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateMessageBody:(id)a0 completion:(id /* block */)a1;
- (void)updateMessageSyncedExt:(id)a0 completion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 inConversation:(id)a1 config:(id)a2;
- (id)initWithMessageServerID:(id)a0 inConversation:(id)a1 config:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
