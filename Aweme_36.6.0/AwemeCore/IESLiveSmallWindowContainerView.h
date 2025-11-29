@class NSString, UIImageView, IESLiveOnePipPreferenceOptionsModel, UIView, UIPanGestureRecognizer;
@protocol IESLiveSmallWindowContainerSubViewProtocol;

@interface IESLiveSmallWindowContainerView : UIView

@property (retain, nonatomic) UIView<IESLiveSmallWindowContainerSubViewProtocol> *currentSmallWindowPlayerView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeArea;
@property (nonatomic) BOOL isShowOuterPlayerView;
@property (retain, nonatomic) UIImageView *rightHideView;
@property (retain, nonatomic) UIImageView *leftHideView;
@property (copy, nonatomic) id /* block */ didPositionChangedBlock;
@property (copy, nonatomic) NSString *currentSmallWindowFrom;
@property (retain, nonatomic) IESLiveOnePipPreferenceOptionsModel *preferenceOptionsModel;
@property (copy, nonatomic) id /* block */ hideArrowBlock;

- (void)maxTopPosition;
- (void)maxBottomPosition;
- (void)addGestureIfNeed;
- (void)clearSmallWindowView;
- (void)updateSmallWindowView:(id)a0;
- (void)hidePlayerViewAnimation:(id /* block */)a0;
- (void)showPlayerViewWithAnimationInLiveRoom:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachArea;
- (void)addPositionChangeBlock:(id /* block */)a0;
- (void)resetPositionIfNeed;
- (BOOL)hideToScreenOut;
- (void)attachToScreenAnimated;
- (BOOL)p_isAttachToLeft;
- (void)setupHideViewWithRight:(BOOL)a0;
- (id)setupHideView;
- (void)handleRectViewTap:(id)a0;
- (void)handleRectViewPan:(id)a0;
- (void)enableResetPostionWhenDeviceOrientationChange:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didPan:(id)a0;
- (double)marginBottom;

@end
