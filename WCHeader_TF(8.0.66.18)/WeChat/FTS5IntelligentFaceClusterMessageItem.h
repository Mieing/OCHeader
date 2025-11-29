@class NSString;

@interface FTS5IntelligentFaceClusterMessageItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) long long faceLabelId;
@property (nonatomic) float zScore;
@property (retain, nonatomic) NSString *faceRectStr;
@property (retain, nonatomic) NSString *mediaFilePath;
@property (retain, nonatomic) NSString *userName;
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
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_162:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_163:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)faceLabelId;
+ (const void *)__wcdb_synthesize_164:(void *)a0;
+ (id)swift_faceLabelId;
+ (const void *)zScore;
+ (const void *)__wcdb_synthesize_165:(void *)a0;
+ (id)swift_zScore;
+ (const void *)faceRectStr;
+ (const void *)__wcdb_synthesize_166:(void *)a0;
+ (id)swift_faceRectStr;
+ (const void *)mediaFilePath;
+ (const void *)__wcdb_synthesize_167:(void *)a0;
+ (id)swift_mediaFilePath;
+ (void)__wcdb_index_168:(void *)a0;
+ (void)__wcdb_index_169:(void *)a0;
+ (void)__wcdb_index_170:(void *)a0;

- (void).cxx_destruct;

@end
