@class NSTimer, AWEPayScanImageInfo, AWEPayScanMetaInfo;

@interface AWEPayScanInfoManager : NSObject

@property (retain, nonatomic) NSTimer *imageCleanTimer;
@property (retain, nonatomic) AWEPayScanImageInfo *scanImageInfo;
@property (retain, nonatomic) AWEPayScanMetaInfo *scanMetaInfo;

+ (void)saveScanInfo:(id)a0;
+ (id)scanMetaInfo;
+ (void)cleanScanImage;
+ (id)scanImageInfo;
+ (id)sharedInstance;

- (void)saveScanInfo:(id)a0;
- (void)cleanScanImage;
- (void)buildScanInfo:(id)a0;
- (void)buildMetaInfoWithScanInfo:(id)a0;
- (void)buildImageInfoWithScanInfo:(id)a0;
- (void)cleanScanMeta;
- (void)setupImageCleanTimer;
- (unsigned long long)scanImageCleanTimeOut;
- (void).cxx_destruct;
- (void)clean;

@end
