@protocol WCCoinEntranceCgiDelegate;

@interface WCCoinEntranceCgi : WCBaseCgi

@property (weak, nonatomic) id<WCCoinEntranceCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
