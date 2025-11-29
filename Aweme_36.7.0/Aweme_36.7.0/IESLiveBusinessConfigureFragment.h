@class NSString, IESLiveBusinessConfigureStore;

@interface IESLiveBusinessConfigureFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAutoRotateAction>

@property (retain, nonatomic) IESLiveBusinessConfigureStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)handleBusinessConfigure:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
