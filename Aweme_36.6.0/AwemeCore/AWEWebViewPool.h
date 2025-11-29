@class NSTimer, NSDictionary, NSLock, NSMutableArray;

@interface AWEWebViewPool : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *webviews;
@property (retain, nonatomic) NSTimer *memoryWarningProtectTimer;
@property (nonatomic) int maxNumberOfInstances;
@property (nonatomic) int memoryWarningProtectDuration;
@property (retain, nonatomic) NSDictionary *defaultSettings;

+ (id)falconWebViewPool;
+ (id)sharedInstance;

- (id)fetchWebViewWithSettings:(id)a0;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (BOOL)needAddInstance;
- (BOOL)needRemoveInstance;
- (void)protectTimerTimeout:(id)a0;
- (void)updatePoolIfNeeded;
- (void)produceWebViewWhenMainThreadIdle;
- (id)fetchWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bridgeClass:(Class)a1 settings:(id)a2;
- (id)generatWebView;
- (id)fetchWebView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;

@end
