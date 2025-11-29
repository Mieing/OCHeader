@class NSString;

@interface MiniGameLocalVideoInfo : NSObject <WCTTableCoding> {
    BOOL _isValid;
}

@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned int userId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *orgFilePath;
@property (retain, nonatomic) NSString *coverPath;
@property (retain, nonatomic) NSString *extJsonData;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int durationSec;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appState;
@property (nonatomic) unsigned int isDevEdited;
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
+ (const void *)fileId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_fileId;
+ (const void *)userId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_userId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_appId;
+ (const void *)appName;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_appName;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_filePath;
+ (const void *)orgFilePath;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_orgFilePath;
+ (const void *)coverPath;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_coverPath;
+ (const void *)extJsonData;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_extJsonData;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_createTime;
+ (const void *)durationSec;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_durationSec;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_title;
+ (const void *)desc;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_desc;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_appVersion;
+ (const void *)appState;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_appState;
+ (const void *)isDevEdited;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_isDevEdited;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (void)__wcdb_index_16:(void *)a0;
+ (void)__wcdb_index_17:(void *)a0;

- (id)getAbsFilePathWithRelativePath:(id)a0;
- (id)initWithVideoFile:(id)a0 userId:(unsigned int)a1;
- (BOOL)isValid;
- (id)absVideoFilePath;
- (id)absThumbPath;
- (void).cxx_destruct;

@end
