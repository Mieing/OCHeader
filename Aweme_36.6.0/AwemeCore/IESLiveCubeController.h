@interface IESLiveCubeController : NSObject

@property (nonatomic) BOOL actived;
@property (readonly, weak, nonatomic) id provider;

- (void)controllerActived;
- (void)controllerRefresh;
- (void)prepareToAactive;
- (void)controllerLoaded;
- (void)controllerWillDeActive;
- (void)recevieEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;

@end
