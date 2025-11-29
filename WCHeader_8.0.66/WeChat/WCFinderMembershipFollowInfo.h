@class NSString;

@interface WCFinderMembershipFollowInfo : NSObject

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long membershipStatus;
@property (nonatomic) unsigned long long visitorStatus;
@property (nonatomic) unsigned long long validTime;
@property (nonatomic) unsigned long long leftDay;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) unsigned long long subscriptionType;
@property (nonatomic) unsigned long long isCancel;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)membershipStatus;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_membershipStatus;
+ (const void *)visitorStatus;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_visitorStatus;
+ (const void *)validTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_validTime;
+ (const void *)leftDay;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_leftDay;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)subscriptionType;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_subscriptionType;
+ (const void *)isCancel;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_isCancel;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;

- (id)initWithFetchFinderMemberStatusResponse:(id)a0 username:(id)a1;
- (void).cxx_destruct;

@end
