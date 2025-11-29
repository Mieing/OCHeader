@class NSArray, NSMutableArray, NSString;

@interface AWEBackgroundLaunchNetworkFilterTask : NSObject <HTSBootTask>

@property (copy, nonatomic) NSArray *whiteHosts;
@property (nonatomic) BOOL enableNetworkFilter;
@property (retain, nonatomic) NSMutableArray *array;
@property (copy, nonatomic) id /* block */ previousRequestLimitBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)execute;
+ (id)sharedInstance;

- (void)p_startRequestInterceptIfNeeded;
- (void)p_startRequestIntercept;
- (BOOL)p_requestLimited:(id)a0;
- (void)p_logIfNeeded:(id)a0 shouldLimited:(BOOL)a1;
- (void)p_writeFilterUrlInfoIfNeeded;
- (void)p_cancelRequestInterceptIfNeeded;
- (void).cxx_destruct;

@end
