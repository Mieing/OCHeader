@class NSString, NSMutableDictionary, LynxBackgroundRuntimeOptions, LynxConfig, LynxGroup;
@protocol LynxMediaResourceFetcher, LynxGenericResourceFetcher, LynxTemplateResourceFetcher, LynxUIRendererCreatorProtocol;

@interface LynxBaseConfigurator : NSObject {
    long long _threadStrategy;
    long long _embeddedMode;
    NSMutableDictionary *_builderRegisteredAliasFontMap;
}

@property (retain, nonatomic) LynxBackgroundRuntimeOptions *lynxBackgroundRuntimeOptions;
@property (retain, nonatomic) LynxConfig *config;
@property (retain, nonatomic) LynxGroup *group;
@property (nonatomic) BOOL enableLayoutSafepoint;
@property (nonatomic) BOOL enableAutoExpose;
@property (nonatomic) BOOL enableTextNonContiguousLayout;
@property (nonatomic) BOOL enableLayoutOnly;
@property (nonatomic) BOOL enableUIOperationQueue;
@property (nonatomic) BOOL enablePendingJSTaskOnLayout;
@property (nonatomic) BOOL enableJSRuntime;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) BOOL enableAsyncCreateRender;
@property (nonatomic) BOOL enableSyncFlush;
@property (nonatomic) BOOL enableMultiAsyncThread;
@property (nonatomic) BOOL enableVSyncAlignedMessageLoop;
@property (nonatomic) BOOL enableAsyncHydration;
@property (nonatomic) BOOL enableMTSModule;
@property (nonatomic) double fontScale;
@property (nonatomic) long long enableGenericResourceFetcher;
@property (retain, nonatomic) id<LynxGenericResourceFetcher> genericResourceFetcher;
@property (retain, nonatomic) id<LynxMediaResourceFetcher> mediaResourceFetcher;
@property (retain, nonatomic) id<LynxTemplateResourceFetcher> templateResourceFetcher;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) BOOL debuggable;
@property (nonatomic) BOOL enablePreUpdateData;
@property (nonatomic) long long backgroundJsRuntimeType;
@property (nonatomic) BOOL enableBytecode;
@property (nonatomic) BOOL enableUnifiedPipeline;
@property (retain, nonatomic) NSString *bytecodeUrl;
@property (retain, nonatomic) id<LynxUIRendererCreatorProtocol> uiRendererCreator;

- (long long)getThreadStrategyForRender;
- (void)setThreadStrategyForRender:(long long)a0;
- (void)addLynxResourceProvider:(id)a0 provider:(id)a1;
- (void)setEmbeddedMode:(long long)a0;
- (long long)getEmbeddedMode;
- (void)setBackgroundJsRuntimeType:(long long)a0;
- (long long)backgroundJsRuntimeType;
- (BOOL)enableBytecode;
- (void)setEnableBytecode:(BOOL)a0;
- (void)setBytecodeUrl:(id)a0;
- (id)bytecodeUrl;
- (id)getLynxResourceProviders;
- (void)registerFont:(id)a0 forName:(id)a1;
- (void)registerFamilyName:(id)a0 withAliasName:(id)a1;
- (id)getBuilderRegisteredAliasFontMap;
- (void).cxx_destruct;
- (id)init;

@end
