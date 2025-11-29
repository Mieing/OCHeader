@class BDPThreadSafeArray, NSString;

@interface BDPPreloadStrategyResult : NSObject

@property (copy, nonatomic) BDPThreadSafeArray *excludeTasks;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long level;
@property (readonly, nonatomic) BOOL shouldPreDownloadPKG;
@property (readonly, nonatomic) BOOL shouldPreloadJSC;
@property (readonly, nonatomic) BOOL shouldPreloadWebView;
@property (readonly, nonatomic) BOOL shouldPreloadPreDefine;

- (void).cxx_destruct;

@end
