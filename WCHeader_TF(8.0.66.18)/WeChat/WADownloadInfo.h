@class NSString, WAInfoData, NSMutableArray;

@interface WADownloadInfo : NSObject

@property (nonatomic) unsigned long long downloadType;
@property (copy, nonatomic) NSString *fullPkgUrl;
@property (copy, nonatomic) NSString *fullPkgZstdUrl;
@property (copy, nonatomic) NSString *patchPkgUrl;
@property (nonatomic) unsigned int oldVersion;
@property (nonatomic) unsigned int targetVersion;
@property (nonatomic) unsigned long long beginTimeForWholePkg;
@property (nonatomic) unsigned long long beginTimeForGzipPkg;
@property (nonatomic) unsigned long long endTimeForGzipPkg;
@property (nonatomic) unsigned long long beginTimeForZstdPkg;
@property (nonatomic) unsigned long long endTimeForZstdPkg;
@property (nonatomic) unsigned long long beginTimeForPatch;
@property (nonatomic) unsigned long long endTimeForPatch;
@property (nonatomic) unsigned long long beginTimeForCheckSumVerify;
@property (nonatomic) unsigned long long endTimeForCheckSumVerify;
@property (nonatomic) BOOL isUpdateCompleteWithPatch;
@property (nonatomic) unsigned int fullPkgSize;
@property (nonatomic) unsigned int patchSize;
@property (retain, nonatomic) WAInfoData *appInfoData;
@property (nonatomic) unsigned int downloadPkgSize;
@property (nonatomic) unsigned int decompressPkgSize;
@property (nonatomic) unsigned int decompressTime;
@property (nonatomic) unsigned long long downloadScene;
@property (retain, nonatomic) NSMutableArray *downloadProgressInfos;
@property (nonatomic) BOOL enableDownloadResumption;

- (BOOL)isUrlEqualToCurrentType:(id)a0;
- (BOOL)isUrlEqualPatchUrl:(id)a0;
- (BOOL)isUrlEqualFullPkgZstdUrl:(id)a0;
- (BOOL)isUrlEqualFullPkgUrl:(id)a0;
- (BOOL)isPatch;
- (BOOL)isZstd;
- (unsigned long long)compressType;
- (id)downloadUrl;
- (void)updateDownloadProgress:(long long)a0;
- (float)getDownloadSpeed;
- (void).cxx_destruct;

@end
