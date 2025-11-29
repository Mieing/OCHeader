@class NSString;

@interface WCCardOfflineCodeConfigData : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *showTimestampEncryptKey;
@property (nonatomic) unsigned int lowerBound;
@property (nonatomic) unsigned int expireTimeInterval;
@property (nonatomic) unsigned int showExpireInterval;
@property (nonatomic) unsigned int localUpdateTime;
@property (nonatomic) BOOL needInsertShowTimestamp;
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
+ (const void *)cardId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_cardId;
+ (const void *)lowerBound;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lowerBound;
+ (const void *)expireTimeInterval;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_expireTimeInterval;
+ (const void *)showExpireInterval;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_showExpireInterval;
+ (const void *)localUpdateTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_localUpdateTime;
+ (const void *)needInsertShowTimestamp;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_needInsertShowTimestamp;
+ (const void *)showTimestampEncryptKey;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_showTimestampEncryptKey;
+ (void)__wcdb_column_constraint_7:(void *)a0;

- (void).cxx_destruct;

@end
