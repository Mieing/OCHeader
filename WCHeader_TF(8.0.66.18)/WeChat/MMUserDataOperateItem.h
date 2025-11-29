@class NSString;

@interface MMUserDataOperateItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned long long operateTime;
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
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_dataType;
+ (const void *)businessType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_businessType;
+ (const void *)operateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_operateTime;
+ (void)__wcdb_index_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;
+ (id)itemWithBusinessType:(unsigned int)a0 dataType:(unsigned int)a1;


@end
