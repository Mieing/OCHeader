@class IESLiveBusinessStreamBarView, NSMutableArray, NSString;

@interface IESLiveBusinessStreamBarHandler : NSObject <HTSLiveStreamPlayerAction, IESLiveFIFAPlayerScaleAction, IESLiveBusinessConfigureHandlerProtocol>

@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLiveBusinessStreamBarView *currentView;
@property (retain, nonatomic) NSMutableArray *configureArray;
@property (nonatomic) BOOL isExecutingTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)didSetAttachingDIContext;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playerWillPlayInSmallWindow;
- (void)playerDidEndplayInSmallWindow;
- (void)executeNextTask;
- (void)removeCurrentView;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)handleBusinessConfigure:(id)a0;
- (void)removeBusinessConfigure:(id)a0;
- (void)showStreamBarView:(id)a0;
- (void)updateStreamBarViewFrame:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
