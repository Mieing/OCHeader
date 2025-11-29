@class NSString, AWEVideoPublishViewModel;

@interface ACCBrushEditTrackManager : NSObject <DVETrackEventProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 eventParam:(id)a1 needCommonParams:(BOOL)a2;
- (id)p_commonParamFromPublishModel;
- (void)trackEnterBrushPage;
- (void)trackBrushPenChangedWithValue:(id)a0 isAuto:(BOOL)a1;
- (void)trackBrushChangedWithValue:(id)a0 isAuto:(BOOL)a1;
- (void)trackBrushSliderChangedValue:(double)a0 isNewUI:(BOOL)a1;
- (void)trackBrushColorWithValue:(id)a0 isAuto:(BOOL)a1;
- (void)trackBrushEditAction:(id)a0;
- (void)trackPreviewPinchScale:(double)a0;
- (void)trackSaveBrush;
- (void)trackCancelBrush:(BOOL)a0;
- (void)trackBrushExitDialogAction:(BOOL)a0;
- (void)trackClickedBrushSizeEntrance;
- (void)trackClickedBrushColorEntrance;
- (void)trackBrushMagnifierViewMoveAction;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;

@end
