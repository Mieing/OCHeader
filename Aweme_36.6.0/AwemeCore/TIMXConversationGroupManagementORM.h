@class NSString;

@interface TIMXConversationGroupManagementORM : TIMXBaseORM <WCTTableCoding, TIMXConversationGroupManagementStoreProtocol>

@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) int greetingUpdateValue;
@property (retain, nonatomic) NSString *greetingMessages;
@property (nonatomic) int allowSelfItemShareStatus;
@property (nonatomic) int allowAdvUserJoinStatus;
@property (nonatomic) int allowAskPraiseUserJoinStatus;
@property (nonatomic) int allowLiveFansSubscriptionAutoRemove;
@property (nonatomic) int allowLiveWindowTopSellerAutoSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)belongingConversationIdentifier;
+ (id)__wcdbtyper;
+ (const void *)allowSelfItemShareStatus;
+ (const void *)allowAdvUserJoinStatus;
+ (const void *)allowAskPraiseUserJoinStatus;
+ (const void *)allowLiveFansSubscriptionAutoRemove;
+ (const void *)allowLiveWindowTopSellerAutoSync;
+ (const void *)greetingUpdateValue;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (const void *)greetingMessages;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (const void *)ss_greetingMessages;
+ (const void *)ss_greetingUpdateValue;
+ (const void *)ss_allowSelfItemShareStatus;
+ (const void *)ss_allowAdvUserJoinStatus;
+ (const void *)ss_allowAskPraiseUserJoinStatus;
+ (const void *)ss_allowLiveFansSubscriptionAutoRemove;
+ (const void *)ss_allowLiveWindowTopSellerAutoSync;
+ (id)swift_ss_greetingMessages;
+ (id)swift_ss_greetingUpdateValue;
+ (id)swift_ss_allowSelfItemShareStatus;
+ (id)swift_ss_allowAdvUserJoinStatus;
+ (id)swift_ss_allowAskPraiseUserJoinStatus;
+ (id)swift_ss_allowLiveFansSubscriptionAutoRemove;
+ (id)swift_ss_allowLiveWindowTopSellerAutoSync;
+ (const void *)allProperties;

- (void).cxx_destruct;

@end
