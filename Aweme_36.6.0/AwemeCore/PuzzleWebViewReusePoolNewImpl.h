@class NSTimer, NSMutableArray, NSDictionary;

@interface PuzzleWebViewReusePoolNewImpl : NSObject

@property (retain, nonatomic) NSMutableArray *readyToUseWebViewsGroups;
@property (retain, nonatomic) NSTimer *memoryWarningTimer;
@property (nonatomic) BOOL reuseDisabled;
@property (copy, nonatomic) NSDictionary *reuseConfig;

+ (void)enqueueWebView:(id)a0;
+ (id)fetchWebViewWithContext:(id)a0;
+ (id)sharedPool;

- (void)enqueueWebView:(id)a0;
- (void)reuseWebview:(id)a0;
- (void)recoverReuse;
- (id)fetchWebViewWithContext:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clearPool;
- (id)init;
- (void)dealloc;

@end
