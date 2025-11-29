@class NSString, NSMutableArray;

@interface IESLiveActivityMagicGestureFragment : IESLiveRoomComponent <IESLiveSEIListener>

@property (retain, nonatomic) NSMutableArray *magicGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)p_addGesture;
- (void)p_removeTimeoutMagicGesture:(id)a0;
- (void)p_trackEventWithGestureModel:(id)a0 eventName:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_activityMagicGestureAreaInPlayerWithCenterPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (BOOL)p_needResponseMagicGestureTap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_pkVideoAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_multiLinkerVideoAreaFrame;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldReceiveTouch:(id)a0;

@end
