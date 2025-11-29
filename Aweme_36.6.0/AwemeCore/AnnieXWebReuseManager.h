@class BDXThreadSafeArray;

@interface AnnieXWebReuseManager : NSObject

@property (retain, nonatomic) BDXThreadSafeArray *reuseList;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) BOOL isClearWhenMemoryWarning;
@property (nonatomic) BOOL reuseDisabled;

+ (id)sharedInstance;

- (void)enqueueWebView:(id)a0;
- (id)fetchWebViewWithKitParams:(id)a0 fromReuse:(BOOL *)a1 fromWarmup:(BOOL *)a2 fromCache:(BOOL *)a3;
- (id)fetchWebViewWithKitParams:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clearPool;
- (id)init;

@end
