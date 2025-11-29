@class NSString, UILabel, IESLiveDanmakuNotifyEffectViewModel, IESLiveFlexBackgroundImageView;
@protocol IESEZDanmakuViewDelegate;

@interface IESLiveDanmakuNotifyEffectView : IESLiveDanmakuBaseView <IESEZDanmakuViewProtocol>

@property (retain, nonatomic) IESLiveFlexBackgroundImageView *enterView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) double danmakuWidth;
@property (retain, nonatomic) IESLiveDanmakuNotifyEffectViewModel *viewModel;
@property (weak, nonatomic) id<IESEZDanmakuViewDelegate> danmakuViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshContentWithViewModel:(id)a0;
- (void)refreshDanmakuWithViewModel:(id)a0;
- (void)trackDanmakuShow;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
