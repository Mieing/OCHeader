@class IESLiveRightBottomMutuallyExclusiveItem, NSString, IESHYHybridContainerConfig, IESLiveGCDTimer, UIView, IESLiveActivityContainerCardModel, UIButton;
@protocol IESHYContainerProtocol, IESLiveActivityContainerCardViewDelegate;

@interface IESLiveActivityContainerCardView : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) IESLiveGCDTimer *showTimer;
@property (retain, nonatomic) IESLiveGCDTimer *hideTimer;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESHYHybridContainerConfig *config;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) IESLiveActivityContainerCardModel *cardModel;
@property (weak, nonatomic) id<IESLiveActivityContainerCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeAnchorPointForView:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showWithAnimation:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })anchorPointForCard;
- (void)hideWithAnimation:(id /* block */)a0;
- (void)removeAndShowNewCard;
- (void)reloadHybridURL;
- (void)hideWithCompletionBlock:(id /* block */)a0;
- (void)configWebview;
- (void)playCardShowAnimation;
- (void)playCardHideAnimation:(id /* block */)a0;
- (void)actionClose;
- (void)showInParentView:(id)a0 completionBlock:(id /* block */)a1;
- (void)destroyWithAnimation:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refresh;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setup;
- (id)setupContext;

@end
