@class IESLiveGiftVoteMachineHybridView, IESLiveLiveRequireGiftEffectLynxViewParamModel, UIView;

@interface IESLiveGiftVoteMachineContainerView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } boxOriginPoint;
@property (retain, nonatomic) UIView *boxContainer;
@property (nonatomic) BOOL enableDock;
@property (retain, nonatomic) IESLiveGiftVoteMachineHybridView *hybridView;
@property (nonatomic) BOOL dragable;
@property (nonatomic) BOOL touchable;
@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) IESLiveLiveRequireGiftEffectLynxViewParamModel *config;

- (void)setupUIsWithOptBoxPosition:(BOOL)a0;
- (double)protectActivityContainerTopOffset;
- (double)convertToDistance:(struct CGPoint { double x0; double x1; })a0;
- (void)panGestureRecognizerHandler:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFullScreen:(BOOL)a1 optBoxPosition:(BOOL)a2 context:(id)a3;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
