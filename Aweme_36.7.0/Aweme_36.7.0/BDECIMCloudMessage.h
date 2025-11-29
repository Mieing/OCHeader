@class NSString, TIMXOMessage, BDECIMClientConfig, NSDictionary, NSNumber, NSDate;

@interface BDECIMCloudMessage : NSObject <BDECIMCloudMessageInterface>

@property long long messageStatus;
@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOMessage *timxMessage;
@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, nonatomic) NSNumber *indexInConversation;
@property (readonly) NSString *identifier;
@property (readonly) NSNumber *serverMessageID;
@property (readonly) NSDictionary *syncedExtInternal;
@property (readonly) NSString *belongingConversationIdentifier;
@property (readonly) long long sender;
@property (readonly) NSDate *createdAt;
@property (readonly) long long belongingSubConvShortID;
@property (readonly) NSDictionary *syncedExt;
@property (readonly) NSDictionary *localExt;
@property (readonly) NSDictionary *content;
@property (readonly) long long messageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)setLocalExtEntry:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)setLocalExtWithKeys:(id)a0 values:(id)a1 completion:(id /* block */)a2;
- (void)updateMessageBody:(id)a0 completion:(id /* block */)a1;
- (void)updateMessageSyncedExt:(id)a0 completion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 inConversation:(id)a1 config:(id)a2;
- (void).cxx_destruct;

@end
