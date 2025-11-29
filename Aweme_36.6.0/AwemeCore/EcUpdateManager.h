@class EcClient;

@interface EcUpdateManager : NSObject

@property (weak, nonatomic) EcClient *client;

- (void)syncPull;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
