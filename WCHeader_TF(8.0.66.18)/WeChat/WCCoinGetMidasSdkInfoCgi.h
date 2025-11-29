@protocol WCCoinGetMidasSdkInfoCgiDelegate;

@interface WCCoinGetMidasSdkInfoCgi : WCBaseCgi

@property (weak, nonatomic) id<WCCoinGetMidasSdkInfoCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
