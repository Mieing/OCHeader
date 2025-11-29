@class NSString;

@interface WCHardlinkFileInfo : NSObject <WCTTableCoding, PBCoding>

@property (nonatomic) unsigned long long inodeNum;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileMD5;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long scanType;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_inodeNum;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_scanType;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)inodeNum;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_inodeNum;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_filePath;
+ (const void *)fileMD5;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_fileMD5;
+ (const void *)fileSize;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_fileSize;
+ (const void *)scanType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_scanType;
+ (void)__wcdb_index_5:(void *)a0;
+ (id)tableName;
+ (id)shortPath:(id)a0;
+ (id)fullPath:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
