@class NSTimer, NSString, IESGCPXPlayGameScreenAdaptiveMaskView;

@interface IESGCPCGScreenAdaptiveComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerActions, IESGCPCGInstanceActions>

@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long gameCurrentOrientation;
@property (retain, nonatomic) IESGCPXPlayGameScreenAdaptiveMaskView *screenAdaptiveMaskView;
@property (nonatomic) struct CGSize { double width; double height; } lastSceneSize;
@property (retain) NSTimer *dismissTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)containerWillLayoutSubviews;
- (void)_showScreenAdaptiveRemindInPadIfNeed;
- (BOOL)_judgeIfChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)_showScreenFullRemindViewIfNeed;
- (void)_showOrDismissScreenRotateRemindView;
- (void)_showScreenAdaptiveMaskView;
- (void)dismissScreenAdaptiveMaskViewAfterDelay;
- (BOOL)_showScreenRotateRemindViewIfNeed;
- (void)_handlePadOrientationRemind;
- (void).cxx_destruct;

@end
