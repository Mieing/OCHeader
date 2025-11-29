@class IESLiveXPlayGameModel, NSString, IESLiveXPlayGameViewController;

@interface IESLiveXPlayCommonBusinessBaseStrategy : NSObject <IESLiveXPlayCommonBusinessStrategy>

@property (retain, nonatomic) IESLiveXPlayGameViewController *xplayGameContainerVC;
@property (retain, nonatomic) IESLiveXPlayGameModel *xplayGameModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableAudioFrame:(BOOL)a0;
- (void)sendFrameBufferToAppId:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 rotation:(long long)a2 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)sendAudioFrameToAppId:(id)a0 frame:(id)a1 timestamp:(long long)a2;
- (void)rotationOrientation:(long long)a0;
- (void)enterLaunch;
- (void)loadXPlayGameWithCompletion:(id /* block */)a0;
- (void)handleCloseXPlayGame:(id)a0 completion:(id /* block */)a1;
- (void)handleXPlayStatusDidUpdate:(long long)a0 extraInfo:(id)a1;
- (id)initWithXPlayVC:(id)a0 xplayGameModel:(id)a1;
- (long long)orientationFromXPlayGameOrientation:(long long)a0;
- (void)showToolBarEntrance;
- (void)hideToolBarEntrance;
- (void).cxx_destruct;

@end
