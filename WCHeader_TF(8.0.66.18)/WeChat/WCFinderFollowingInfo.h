@class NSString;

@interface WCFinderFollowingInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *followingUsername;
@property (nonatomic) unsigned long long followIndex;
@property (nonatomic) unsigned long long oneTimeFlag;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)followingUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_followingUsername;
+ (const void *)followIndex;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_followIndex;
+ (const void *)oneTimeFlag;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_oneTimeFlag;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
