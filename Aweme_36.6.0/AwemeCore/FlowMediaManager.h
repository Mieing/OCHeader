@interface FlowMediaManager : NSObject

+ (void)setIgnoreAudioInterruption:(BOOL)a0;
+ (void)switchToDefaultNetwork;
+ (void)switchToCellularNetwork;
+ (void)setPreloadDelegate:(id)a0;
+ (void)preload:(id)a0 completion:(id /* block */)a1;
+ (void)cancelAllPreload;
+ (id)videoSerialQueue;
+ (void)startOpenGLES;
+ (void)stopOpenGLES;
+ (void)configureMedia:(id)a0 enableAutoWIFITo4G:(BOOL)a1;
+ (void)cancelPreloadByKey:(id)a0;
+ (id)mediaCacheInfo:(id)a0;
+ (long long)mediaCacheSize:(id)a0;
+ (void)removeMediaCache:(id)a0;
+ (void)removeAllMediaCache;

@end
