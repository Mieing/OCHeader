@class NSString, NSDictionary, NSOrderedSet;
@protocol TIMXSubConversationModelProtocol;

@interface TIMXECOMSubConversation : TIMXOModel <TIMXMessageStoreChangesObserver>

@property int appID;
@property long long parentConversationShortID;
@property long long subConversationShortID;
@property (copy) NSString *subConversationIdentifier;
@property int status;
@property int type;
@property (copy) NSString *bizStatus;
@property long long createTime;
@property long long modifyTime;
@property (copy) NSDictionary *extra;
@property int inbox;
@property (retain) NSOrderedSet *participants;
@property (retain) id<TIMXSubConversationModelProtocol> internalModel;
@property (retain) NSString *observerID;
@property BOOL hasInited;
@property (copy, nonatomic) NSString *parentConversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithRootObject:(id)a0 subConvIdentifier:(id)a1;

- (void)onConversationCleared:(id)a0;
- (id)initWithModel:(id)a0 rootObject:(id)a1;
- (void)setUpWithModel:(id)a0;
- (void)applyAttributesFromModel:(id)a0;
- (id)participantModelFromPBParticipant:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
