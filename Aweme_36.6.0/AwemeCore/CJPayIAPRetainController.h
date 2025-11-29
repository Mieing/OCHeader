@class NSMutableArray, CJPayIAPConfigResponse;

@interface CJPayIAPRetainController : NSObject

@property (retain, nonatomic) CJPayIAPConfigResponse *iapConfigResponse;
@property (retain, nonatomic) NSMutableArray *hasRetainTradeNoList;
@property (nonatomic) BOOL isIAPOnprogress;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)beginIAPProcess;
- (void)endIAPProcess;
- (void)asyncRefreshIAPConfigWithParams:(id)a0;
- (BOOL)showRetainWithTradeNo:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
