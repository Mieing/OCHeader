@class LiteAppEngineConfigStarTaskModel, LiteAppEngineConfigMinimizeTaskModel;

@interface LiteAppEngineConfigModel : NSObject

@property (retain, nonatomic) LiteAppEngineConfigStarTaskModel *starTask;
@property (retain, nonatomic) LiteAppEngineConfigMinimizeTaskModel *minimizeTask;

- (id)init;
- (void).cxx_destruct;

@end
