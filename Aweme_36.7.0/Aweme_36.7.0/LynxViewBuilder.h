@class NSMutableDictionary, NSURL, LynxViewGroup, LynxBackgroundRuntime;
@protocol LynxDynamicComponentFetcher;

@interface LynxViewBuilder : LynxBaseConfigurator

@property (nonatomic) BOOL enableRadonCompatible;
@property (retain, nonatomic) id<LynxDynamicComponentFetcher> fetcher;
@property (nonatomic) BOOL enableLynxResourceServiceLoaderInjection;
@property (nonatomic) BOOL isUIRunningMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) LynxBackgroundRuntime *lynxBackgroundRuntime;
@property (retain, nonatomic) LynxViewGroup *lynxViewGroup;
@property (retain, nonatomic) NSMutableDictionary *lynxViewConfig;
@property (retain, nonatomic) id lynxModuleExtraData;
@property (retain, nonatomic) NSURL *uri;

- (BOOL)enableLayoutOnly;
- (long long)getThreadStrategyForRender;
- (BOOL)enableAirStrictMode;
- (long long)enableGenericResourceFetcher;
- (BOOL)enableMultiAsyncThread;
- (BOOL)enableUIOperationQueue;
- (BOOL)enablePreUpdateData;
- (BOOL)enableJSRuntime;
- (long long)getEmbeddedMode;
- (BOOL)enableAutoExpose;
- (long long)backgroundJsRuntimeType;
- (BOOL)enableBytecode;
- (BOOL)enableTextNonContiguousLayout;
- (id)genericResourceFetcher;
- (id)bytecodeUrl;
- (id)mediaResourceFetcher;
- (id)templateResourceFetcher;
- (BOOL)enableLayoutSafepoint;
- (BOOL)enablePendingJSTaskOnLayout;
- (BOOL)enableAsyncCreateRender;
- (BOOL)enableSyncFlush;
- (BOOL)enableVSyncAlignedMessageLoop;
- (BOOL)enableAsyncHydration;
- (BOOL)enableMTSModule;
- (BOOL)debuggable;
- (BOOL)enableUnifiedPipeline;
- (id)uiRendererCreator;
- (id)getModuleWrapper;
- (void)insertLynxViewConfig:(id)a0 forKey:(id)a1;
- (struct CGSize { double x0; double x1; })screenSize;
- (void)setConfig:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)group;
- (double)fontScale;

@end
