@class NSString, BDXResourceLoaderTaskConfig, BDXRLPreloadItemConfig;

@interface BDXPreloaderOperation : NSOperation

@property (copy, nonatomic) NSString *bulletSchema;
@property (retain, nonatomic) BDXRLPreloadItemConfig *preloadItemConfig;
@property (retain, nonatomic) BDXResourceLoaderTaskConfig *taskConfig;

- (id)initWith:(id)a0 preloadItemConfig:(id)a1 taskConfig:(id)a2;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;

@end
