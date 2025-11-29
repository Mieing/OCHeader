@class TTVideoEngineModel;
@protocol TTVideoEngineGearStrategyDelegate;

@interface TTVideoEngineGearContext : NSObject

@property (weak, nonatomic) id<TTVideoEngineGearStrategyDelegate> gearDelegate;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (retain, nonatomic) id userData;

- (void).cxx_destruct;

@end
