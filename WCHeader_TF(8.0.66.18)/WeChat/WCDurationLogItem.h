@class NSString;

@interface WCDurationLogItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int activeStartTime;
@property (nonatomic) unsigned int activeEndTime;
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
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localId;
+ (const void *)activeStartTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_activeStartTime;
+ (const void *)activeEndTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_activeEndTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (id)logItem;
+ (id)logItemFromDescription:(id)a0;
+ (id)stringFromItems:(id)a0;

- (void)reset;

@end
