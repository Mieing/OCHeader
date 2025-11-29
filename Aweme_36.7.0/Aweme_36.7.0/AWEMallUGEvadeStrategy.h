@class NSString;
@protocol AWEMallUGEvadeStrategyProtocol;

@interface AWEMallUGEvadeStrategy : NSObject <AWEUGSceneUndertakeEvadeProtocol>

@property (copy, nonatomic) NSString *sceneType;
@property (weak, nonatomic) id<AWEMallUGEvadeStrategyProtocol> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUGSnackbarEvade;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;

@end
