@class AWEVideoPlayDanmakuModel, NSString, AWEDanmakuDiggNumView, UIView, AWEDanmakuContentLabel, AWEDanmakuCommonViewShieldConfig;
@protocol AWEDanmakuUnitViewRecognizeHandleDelegate, AWEDanmakuItemCommonViewDelegate;

@interface AWEDanmakuItemCommonView : DDanmakuItemBaseView <CAAnimationDelegate, UIGestureRecognizerDelegate, AWEDanmakuUnitViewProtocol>

@property (retain, nonatomic) AWEDanmakuContentLabel *contentLabel;
@property (retain, nonatomic) AWEDanmakuDiggNumView *diggNumView;
@property (retain, nonatomic) UIView *ownerBorderView;
@property (retain, nonatomic) AWEDanmakuCommonViewShieldConfig *viewConfig;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmaKuModel;
@property (weak, nonatomic) id<AWEDanmakuItemCommonViewDelegate> commonViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEDanmakuUnitViewRecognizeHandleDelegate> recognizeDelegate;

- (void)didDisplay;
- (void)updateWithDescriptor:(id)a0;
- (void)updateDanmaKuUnitView;
- (void)handleDanmakuDiggStatusChangeWithBlock:(id /* block */)a0 needAnimation:(BOOL)a1;
- (BOOL)clickPointIsInDiggNumViewWithClickPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleDanmakuViewTap:(id)a0;
- (id)initWithItemViewType:(id)a0;
- (double)totalLifeTime;
- (double)obtainContentLabelX;
- (double)obtainOwnerBorderRightOffset;
- (id)initWithItemViewType:(id)a0 config:(id)a1;
- (void)updateOwnerBorderWithNeedShow:(BOOL)a0;
- (void)updateDanmakuDiggImageViewLayOut;
- (void)updateAccessibilityLabelIfNeed;
- (void)addSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)animationSpeed;
- (void)didEndDisplaying;

@end
