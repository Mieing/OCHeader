@class NSData, NSString, NSArray, IESLiveDefaultSettingModel, NSDictionary, HybridMonitor, LynxSSRConfig, NSNumber, HybridLynxViewPreLayoutContext;
@protocol LynxDynamicComponentFetcher, LynxTemplateProvider, LynxImageFetcher, LynxResourceFetcher, HybridLynxMonitorProtocol, LynxResourceProvider;

@interface HybridLynxKitParams : HybridKitParams

@property (nonatomic) BOOL useAnnieX;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSNumber *useForest;
@property (nonatomic) BOOL lockResource;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSNumber *enableMemoryCache;
@property (copy, nonatomic) NSNumber *disableGurd;
@property (copy, nonatomic) NSNumber *disableBuildin;
@property (copy, nonatomic) NSString *groupContext;
@property (retain, nonatomic) NSArray *extraJSPaths;
@property (nonatomic) long long dynamic;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) BOOL disableAutoExpose;
@property (retain, nonatomic) id initialProperties;
@property (copy, nonatomic) NSString *initialPropertiesState;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) long long threadStrategy;
@property (retain, nonatomic) NSNumber *enableSafePoint;
@property (retain, nonatomic) NSNumber *presetWidth;
@property (retain, nonatomic) NSNumber *presetHeight;
@property (nonatomic) BOOL enableRadonCompatible;
@property (retain, nonatomic) NSData *templateData;
@property (retain, nonatomic) id templateBundle;
@property (retain, nonatomic) LynxSSRConfig *lynxSSRConfig;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL landscapeScreenSizeAsProtrait;
@property (nonatomic) NSNumber *enableCanvasOptimization;
@property (nonatomic) BOOL enableJSRuntime;
@property (nonatomic) BOOL enablePendingJsTask;
@property (copy, nonatomic) id /* block */ rawViewBuilderBlock;
@property (weak, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (weak, nonatomic) id<LynxResourceProvider> i18nProvider;
@property (retain, nonatomic) HybridMonitor *lifeCycleMonitor;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *bid;
@property (retain, nonatomic) NSNumber *enableUIOperationQueue;
@property (retain, nonatomic) HybridLynxViewPreLayoutContext *preLayoutContext;
@property (retain, nonatomic) id<HybridLynxMonitorProtocol> lynxMonitor;
@property (copy, nonatomic) NSArray *xBridgeMethods;
@property (copy, nonatomic) NSArray *xBridgeMethodInstances;
@property (retain, nonatomic) IESLiveDefaultSettingModel *monitorSettingModel;
@property (copy, nonatomic) NSDictionary *lynxModule;
@property (retain, nonatomic) NSString *bridgeNameSpace;
@property (copy, nonatomic) NSDictionary *prefetchInitData;
@property (copy, nonatomic) id /* block */ didSendEventBlock;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSArray *customUIElements;

- (void).cxx_destruct;
- (id)init;

@end
