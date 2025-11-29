@class NSString, TIMXOConversationFansGroupGreetingInfo;

@interface TIMXOConversationGroupManagementModel : TIMXOModel <TIMXOConversationGroupManagementModelProtocol>

@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (retain, nonatomic) TIMXOConversationFansGroupGreetingInfo *greetingInfo;
@property (nonatomic) BOOL allowSelfItemShareStatus;
@property (nonatomic) BOOL allowAdvUserJoinStatus;
@property (nonatomic) BOOL allowAskPraiseUserJoinStatus;
@property (nonatomic) BOOL allowLiveFansSubscriptionAutoRemove;
@property (nonatomic) BOOL allowLiveWindowTopSellerAutoSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithRootObject:(id)a0 identifier:(id)a1;
+ (id)initWithRootObject:(id)a0 storeModel:(id)a1;
+ (id)cacheKeyWithCid:(id)a0;

- (id)initWithRootObject:(id)a0 conversationId:(id)a1;
- (void).cxx_destruct;

@end
