@class NSString, NSMutableDictionary;

@interface BDWebViewFalconMonitorInternel : NSObject <IESFalconMonitorInterceptor, IESWebViewMonitorDelegate>

@property (retain, nonatomic) NSMutableDictionary *falconDict;
@property (nonatomic) long long maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)reportDataBeforeLeave:(id)a0;
- (void)getFalconInfo:(id)a0 forURLString:(id)a1 pathExtension:(id)a2 isGetmethod:(BOOL)a3 isCustomInterceptor:(BOOL)a4;
- (BOOL)isTurnOnFalconMonitor:(id)a0;
- (void)reportFalconDataWithWebView:(id)a0 urlString:(id)a1;
- (id)getInformationFromKey:(id)a0 index:(long long)a1;
- (BOOL)isDupricate:(id)a0 requestUrlString:(id)a1;
- (BOOL)isClassTurnOnFalconMonitor:(Class)a0;
- (void)didGetMetaData:(id)a0 forRequest:(id)a1 isGetMethod:(BOOL)a2 isCustomInterceptor:(BOOL)a3;
- (void)webView:(id)a0 loadRequest:(id)a1 metaData:(id)a2 isCustomInterceptor:(BOOL)a3;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;

@end
