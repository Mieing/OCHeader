@class WAContactGetter;

@interface WAAppIdToUsernameTransfer : MMObject

@property (retain, nonatomic) WAContactGetter *contactGetter;

- (void)transferAppidToUsernameWithAppId:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
