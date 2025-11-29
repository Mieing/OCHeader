@class NSString;

@interface TemplateSessionMsgIndex : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int createTime;
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
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_createTime;
+ (void)__wcdb_column_constraint_2:(void *)a0;
+ (void)__wcdb_index_3:(void *)a0;
+ (void)__wcdb_column_constraint_4:(void *)a0;
+ (void)__wcdb_column_constraint_5:(void *)a0;


@end
