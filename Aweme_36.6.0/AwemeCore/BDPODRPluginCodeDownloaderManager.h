@class NSMutableDictionary;

@interface BDPODRPluginCodeDownloaderManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloaderMap;

+ (id)sharedManager;

- (id)downloaderWithModel:(id)a0 codesXzPath:(id)a1 decompressPath:(id)a2;
- (void)releaseDownloaderIfNeedWithModel:(id)a0;
- (void).cxx_destruct;

@end
