@class NSMutableDictionary, NSDictionary, WAInfoData, NSString;

@interface MMWebJsBasePkgInfo : MMObject

@property (nonatomic) void *unpackLib;
@property (retain, nonatomic) NSDictionary *dicMetaInfo;
@property (retain, nonatomic) NSDictionary *dicVersionJsonInfo;
@property (retain, nonatomic) NSDictionary *dicCacheFileInfo;
@property (retain, nonatomic) NSDictionary *dicAppConfigInfo;
@property (retain, nonatomic) NSMutableDictionary *dicTaskConfig2Path;
@property (retain, nonatomic) WAInfoData *waInfoData;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) BOOL isDebug;

+ (id)pkgMetaInfoKey;
+ (id)pkgWithFilePath:(id)a0;
+ (id)dataWithFileName:(id)a0 unpackPkg:(void *)a1;
+ (id)getDicCacheFileInfoFromUnpackLib:(void *)a0;
+ (BOOL)isVersion:(id)a0 largerThanVersion:(id)a1;

- (BOOL)isAppSupportFrameSet:(id)a0 path:(id)a1;
- (BOOL)isAppSupportFrameSetWithRegexp:(id)a0 path:(id)a1;
- (void)setupConfigForPath:(id)a0;
- (id)appConfigArrTaskConfig;
- (void)dealloc;
- (BOOL)initFromFilePath:(id)a0;
- (id)JSONDictionaryWithFileInfo:(id)a0;
- (BOOL)isFileExistWithPath:(id)a0;
- (id)getFileDataWithPath:(id)a0;
- (id)getFileStrWithPath:(id)a0;
- (long long)version;
- (long long)minClientVersionRequired;
- (id)appConfigVersionStr;
- (id)minPubLibVersionRequired;
- (id)pubLibVersionStr;
- (long long)pubLibMinClientVersion;
- (long long)pubLibMaxClientVersion;
- (void).cxx_destruct;

@end
