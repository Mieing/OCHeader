@class NSString;

@interface GameHaowanMediaInfoTableItem : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *abosulteLocalPath;
@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) NSString *postId;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *localPath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *cdnUrl;
@property (nonatomic) int uploadState;
@property (nonatomic) unsigned int editFlag;
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
+ (const void *)fileKey;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_fileKey;
+ (const void *)postId;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_postId;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_localId;
+ (const void *)localPath;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_localPath;
+ (const void *)fileSize;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (id)swift_fileSize;
+ (const void *)mediaType;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (id)swift_mediaType;
+ (const void *)cdnUrl;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (id)swift_cdnUrl;
+ (const void *)uploadState;
+ (const void *)__wcdb_synthesize_18:(void *)a0;
+ (id)swift_uploadState;
+ (const void *)editFlag;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (id)swift_editFlag;
+ (void)__wcdb_column_constraint_20:(void *)a0;

- (void).cxx_destruct;

@end
