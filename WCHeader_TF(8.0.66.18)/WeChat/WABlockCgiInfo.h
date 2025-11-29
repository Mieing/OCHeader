@class NSString;

@interface WABlockCgiInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *blockCgiListStr;
@property (retain, nonatomic) NSString *blockSceneListStr;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int reportId;
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
+ (const void *)appid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_appid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_username;
+ (const void *)blockCgiListStr;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_blockCgiListStr;
+ (const void *)blockSceneListStr;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_blockSceneListStr;
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_endTime;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_reportId;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (void).cxx_destruct;

@end
