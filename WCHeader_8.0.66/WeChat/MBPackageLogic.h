@class NSString, NSURL, NSMutableDictionary;

@interface MBPackageLogic : NSObject {
    NSMutableDictionary *dicCacheFileInfo;
    id /* block */ onFinishDownloadPkgBlock;
}

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned int version;
@property (nonatomic) int debugModeType;
@property (nonatomic) unsigned int devUin;
@property (nonatomic) BOOL downloadFinished;
@property (copy, nonatomic) NSURL *wxapkgPathUrl;

- (void)dealloc;
- (id)initWithAppid:(id)a0 version:(unsigned int)a1 debugMode:(unsigned long long)a2 devUin:(unsigned int)a3;
- (void)setupDownloadFinishedBlock:(id /* block */)a0;
- (void)download;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)setupFileInfoByWxaPkgPath:(id)a0;
- (BOOL)hasLocalCacheDataWithFullUrl:(id)a0;
- (id)getCacheFileInfoWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0 offset:(unsigned int)a1 length:(unsigned int)a2 error:(id *)a3;
- (BOOL)unpackPkgWithFilePath:(id)a0 unpackLib:(void *)a1;
- (id)getCheckSumMD5:(id)a0;
- (void).cxx_destruct;

@end
