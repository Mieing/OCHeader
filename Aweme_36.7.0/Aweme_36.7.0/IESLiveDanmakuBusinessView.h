@class NSString, IESLiveImageView, UILabel, UIView, IESLiveDanmakuBusinessViewModel;
@protocol IESEZDanmakuViewDelegate;

@interface IESLiveDanmakuBusinessView : IESLiveDanmakuBaseView <IESEZDanmakuViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveImageView *logoImageView;
@property (retain, nonatomic) IESLiveImageView *arrowImageView;
@property (retain, nonatomic) IESLiveImageView *tailImageView;
@property (nonatomic) double danmuPauseTime;
@property (nonatomic) double cacheDanmukuWidth;
@property (retain, nonatomic) IESLiveDanmakuBusinessViewModel *viewModel;
@property (weak, nonatomic) id<IESEZDanmakuViewDelegate> danmakuViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshContentWithViewModel:(id)a0;
- (void)refreshDanmakuWithViewModel:(id)a0;
- (BOOL)enableJump;
- (void)danmaItemClicked;
- (id)schemeForJump:(id)a0;
- (void)trackDanmaWithEventName:(id)a0;
- (void)updateSubviewsConstraints;
- (void).cxx_destruct;
- (void)resumeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;

@end
