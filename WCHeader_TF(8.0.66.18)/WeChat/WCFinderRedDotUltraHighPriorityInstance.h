@class NSString;

@interface WCFinderRedDotUltraHighPriorityInstance : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) double updateTime;
@property (nonatomic) double startTime;
@property (nonatomic) double expireTime;
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
+ (const void *)instanceId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_instanceId;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_startTime;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_expireTime;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
