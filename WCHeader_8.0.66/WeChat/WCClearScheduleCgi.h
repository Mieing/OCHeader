@protocol WCClearScheduleCgiDelegate;

@interface WCClearScheduleCgi : WCBaseCgi

@property (weak, nonatomic) id<WCClearScheduleCgiDelegate> delegate;
@property (nonatomic) BOOL isRunning;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
