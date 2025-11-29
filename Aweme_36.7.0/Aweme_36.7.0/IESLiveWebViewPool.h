@class NSTimer, NSMutableArray, NSDictionary;
@protocol IESLiveDebugService, IESLiveHybridContainerFactory;

@interface IESLiveWebViewPool : NSObject

@property (nonatomic) unsigned long long poolSize;
@property (nonatomic) BOOL enableReuse;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSMutableArray *readyToUseWebViews;
@property (retain, nonatomic) NSMutableArray *inUseWebViews;
@property (retain, nonatomic) NSTimer *memoryWarningTimer;
@property (copy, nonatomic) NSDictionary *reuseConfig;
@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webviewFactory;
@property (retain, nonatomic) id<IESLiveDebugService> debugService;

+ (void)enqueueWebView:(id)a0;
+ (id)fetchWebViewWithDIContext:(id)a0;
+ (void)clearPool;
+ (id)sharedPool;
+ (void)setPoolSize:(unsigned long long)a0;

- (void)enqueueWebView:(id)a0;
- (id)fetchWebViewInstanceWithDIContext:(id)a0;
- (void)reuseWebview:(id)a0;
- (void)recoverReuse;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clearPool;
- (id)init;
- (void)dealloc;
- (id)createWebView;

@end
