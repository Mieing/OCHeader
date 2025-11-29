@class NSString, UIImageView, AWEVideoPlayDanmakuModel, AWEDanmakuContentLabel;

@interface AWEDanmakuDiggNumView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *diggImageView;
@property (retain, nonatomic) AWEDanmakuContentLabel *diggNumLabel;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmaKuModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDiggImageOvertWithModel:(id)a0;
- (void)showDiggGroupAnimationIfNeed;
- (void)updateDiggViewStateWithoutAnimation;
- (void)showDiggStartAnimationWithCompletionBlock:(id /* block */)a0;
- (void)updateDiggImageAndDiggLabel;
- (BOOL)isShowDiggNumLabelWithModel:(id)a0;
- (BOOL)isShowDiggImageViewWithModel:(id)a0;
- (void)showDiggNumViewWithModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)configDanmakuDiggImageWithModel:(id)a0;
- (BOOL)needUpdateDiggImageViewState;
- (void)changeDiggStatusWithModel:(id)a0 needAnimation:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)showDiggImageWithModel:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)diggImageViewIsHidden;
- (void)updateLayOutIfNeed;
- (BOOL)shouldShowDiggNumLabelWithModel:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
