@class NSString;

@interface WALocalStorageLengthInfo : NSObject <WCTTableCoding>

@property (nonatomic) int storageId;
@property (nonatomic) unsigned long long storageLength;
@property (nonatomic) unsigned int lastModifyTime;
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
+ (const void *)storageId;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (id)swift_storageId;
+ (const void *)storageLength;
+ (const void *)__wcdb_synthesize_20:(void *)a0;
+ (id)swift_storageLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_21:(void *)a0;
+ (id)swift_lastModifyTime;
+ (void)__wcdb_column_constraint_22:(void *)a0;


@end
