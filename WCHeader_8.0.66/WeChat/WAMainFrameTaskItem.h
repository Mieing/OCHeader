@class NSString;

@interface WAMainFrameTaskItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int debugMode;
@property (nonatomic) unsigned int updateTime;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_userName;
+ (const void *)debugMode;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_debugMode;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;

- (void).cxx_destruct;

@end
