@class NSString;

@interface WCCommonCacheObj : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *fileMd5;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int lastUseTime;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *aggregateName;
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
+ (const void *)fileMd5;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_fileMd5;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_filePath;
+ (const void *)lastUseTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_lastUseTime;
+ (const void *)mediaType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_mediaType;
+ (const void *)aggregateName;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_aggregateName;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (id)getAbsolutePath;
- (void).cxx_destruct;

@end
