@class NSString, MoveWithTouchAlgorithm, UIView;
@protocol WCLiveVideoViewDelegate;

@interface WCLiveVideoView : UIImageView <MoveWithTouchAlgorithmDelegate>

@property (retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm;
@property (nonatomic) struct CGPoint { double x; double y; } currentOrigin;
@property (weak, nonatomic) UIView *frontView;
@property (weak, nonatomic) id<WCLiveVideoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)supportDragIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowAdsorbToWindow:(BOOL)a1;
- (void)supportDrag;
- (void)unSupportDrag;
- (void)adsorbToWindow;
- (void)setHidden:(BOOL)a0;
- (void)addFrontView:(id)a0;
- (void)addSubview:(id)a0;
- (void)createMoveAlgorithm;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint { double x0; double x1; })a0;
- (id)onMoveWithTouchAlgorithmRequestView;
- (BOOL)shouldLockToPortrait;
- (BOOL)shouldForcePortrait;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
