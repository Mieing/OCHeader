@class IESLiveCameraZoomThresholdView, HTSEventContext, IESLiveCountTimer, NSString, NSNumber;

@interface IESLiveCameraZoomGestureHandler : NSObject <IESLiveAnchorPanelTabViewDelegate>

@property (nonatomic) double minCameraZoomFactor;
@property (nonatomic) double maxCameraZoomFactor;
@property (retain, nonatomic) IESLiveCameraZoomThresholdView *thresholdView;
@property (retain, nonatomic) IESLiveCountTimer *thresholdViewTimer;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ setZoomFactorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaxZoomFactor:(double)a0;
- (void)trackCameraSwitch:(double)a0 afterFactor:(double)a1 isLiveRoom:(BOOL)a2;
- (void)setMaxZoomFactorIfNeed;
- (void)setupThresholdViewWithCurrentZoomFactor:(double)a0 container:(id)a1;
- (void)trackPinchZoom:(id)a0 isLiveRoom:(BOOL)a1;
- (void)clearThresholdView:(BOOL)a0;
- (void)clearThresholdViewTimer;
- (void)updateThresholdViewTimer;
- (void)didSelectedZoomFactor:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
