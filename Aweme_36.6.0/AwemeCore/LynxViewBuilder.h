@class LynxGroup, LynxBackgroundRuntimeOptions, NSString, NSURL, LynxConfig, NSMutableDictionary, LynxBackgroundRuntime, LynxTemplateBundle;
@protocol LynxDynamicComponentFetcher, LynxGenericResourceFetcher, LynxMediaResourceFetcher, LynxTemplateResourceFetcher, LynxUIRendererProtocol;

@interface LynxViewBuilder : NSObject {
    long long _threadStrategy;
    long long _embeddedMode;
    NSMutableDictionary *_builderRegisteredAliasFontMap;
}

@property (retain, nonatomic) LynxBackgroundRuntimeOptions *lynxBackgroundRuntimeOptions;
@property (retain, nonatomic) id<LynxUIRendererProtocol> lynxUIRenderer;
@property (retain, nonatomic) LynxConfig *config;
@property (retain, nonatomic) LynxGroup *group;
@property (retain, nonatomic) LynxBackgroundRuntime *lynxBackgroundRuntime;
@property (nonatomic) BOOL enableLayoutSafepoint;
@property (nonatomic) BOOL enableAutoExpose;
@property (nonatomic) BOOL enableTextNonContiguousLayout;
@property (nonatomic) BOOL enableLayoutOnly;
@property (nonatomic) BOOL enableUIOperationQueue;
@property (nonatomic) BOOL enablePendingJSTaskOnLayout;
@property (nonatomic) BOOL enableJSRuntime;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) BOOL enableAsyncCreateRender;
@property (nonatomic) BOOL enableRadonCompatible;
@property (nonatomic) BOOL enableSyncFlush;
@property (nonatomic) BOOL enableMultiAsyncThread;
@property (nonatomic) BOOL enableVSyncAlignedMessageLoop;
@property (nonatomic) BOOL enableAsyncHydration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<LynxDynamicComponentFetcher> fetcher;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) NSMutableDictionary *lynxViewConfig;
@property (nonatomic) long long enableGenericResourceFetcher;
@property (retain, nonatomic) id<LynxGenericResourceFetcher> genericResourceFetcher;
@property (retain, nonatomic) id<LynxMediaResourceFetcher> mediaResourceFetcher;
@property (retain, nonatomic) id<LynxTemplateResourceFetcher> templateResourceFetcher;
@property (nonatomic) LynxTemplateBundle *lynxTemplateBundleForEngineReused;
@property (retain, nonatomic) id lynxModuleExtraData;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) BOOL debuggable;
@property (nonatomic) BOOL enablePreUpdateData;
@property (nonatomic) BOOL enableLynxResourceServiceLoaderInjection;
@property (nonatomic) long long backgroundJsRuntimeType;
@property (nonatomic) BOOL enableBytecode;
@property (nonatomic) BOOL enableUnifiedPipeline;
@property (retain, nonatomic) NSString *bytecodeUrl;
@property (nonatomic) BOOL isUIRunningMode;
@property (retain, nonatomic) NSURL *uri;

- (long long)getThreadStrategyForRender;
- (void)setThreadStrategyForRender:(long long)a0;
- (void)addLynxResourceProvider:(id)a0 provider:(id)a1;
- (void)setBackgroundJsRuntimeType:(long long)a0;
- (long long)backgroundJsRuntimeType;
- (BOOL)enableBytecode;
- (void)setEnableBytecode:(BOOL)a0;
- (void)setBytecodeUrl:(id)a0;
- (id)bytecodeUrl;
- (void)registerFont:(id)a0 forName:(id)a1;
- (void)registerFamilyName:(id)a0 withAliasName:(id)a1;
- (long long)getEmbeddedMode;
- (id)getLynxResourceProviders;
- (id)getBuilderRegisteredAliasFontMap;
- (void)setEmbeddedMode:(long long)a0;
- (void)insertLynxViewConfig:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
