@class NSMutableArray, IESLLNetworkRequest;

@interface IESLLPOIBizCodeFallbackUtil : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) IESLLNetworkRequest *request;

+ (BOOL)bizCodeFallbackEnable;
+ (BOOL)canFetchBizCode:(id)a0;
+ (void)trackFetchBizCode:(id)a0 success:(BOOL)a1;
+ (id)sharedInstance;

- (void)executeAllCallbacksWithNewRouterParams:(id)a0;
- (void)didEndRequest;
- (void)fetchBizCodeWithRouterParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
