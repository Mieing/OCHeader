@class NSString;

@interface WCFinderExposeDataModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long exposeDate;
@property (nonatomic) unsigned long long exposeCount;
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
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)exposeDate;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_exposeDate;
+ (const void *)exposeCount;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_exposeCount;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (void)__wcdb_table_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
