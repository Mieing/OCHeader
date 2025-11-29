@class NSString, AWEPOILynxPreloadManager;

@interface AWEGDPreloadManager : NSObject

@property (nonatomic) BOOL setted;
@property (retain, nonatomic) AWEPOILynxPreloadManager *lynxPreloadManager;
@property (retain, nonatomic) NSString *channel;

+ (id)sharedInstance;

- (void)setBizData:(id)a0 forKey:(id)a1;
- (id)bizDataForKey:(id)a0;
- (void)preloadBySchemeUrls:(id)a0 optimizeMemory:(BOOL)a1;
- (void)reportTrackWithContext:(id)a0 schemeUrls:(id)a1;
- (void)setupLynxPreloadBySchemeUrls:(id)a0 optimizeMemory:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;

@end
