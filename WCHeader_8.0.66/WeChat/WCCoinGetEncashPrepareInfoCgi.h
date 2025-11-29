@class NSMutableArray;
@protocol WCCoinGetEncashPrepareInfoCgiDelegate;

@interface WCCoinGetEncashPrepareInfoCgi : WCBaseCgi

@property (retain, nonatomic) NSMutableArray *businessId;
@property (weak, nonatomic) id<WCCoinGetEncashPrepareInfoCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
