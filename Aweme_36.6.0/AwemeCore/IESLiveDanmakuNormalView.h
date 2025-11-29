@class IESLiveDanmakuNormalLabel, NSString, IESLiveDanmakuNormalViewModel, UIView;
@protocol IESEZDanmakuViewDelegate;

@interface IESLiveDanmakuNormalView : IESLiveDanmakuBaseView <IESEZDanmakuViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveDanmakuNormalLabel *contentLabel;
@property (nonatomic) double cacheDanmukuWidth;
@property (retain, nonatomic) IESLiveDanmakuNormalViewModel *viewModel;
@property (weak, nonatomic) id<IESEZDanmakuViewDelegate> danmakuViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableLocalizations;
- (void)refreshContentWithViewModel:(id)a0;
- (void)refreshDanmakuWithViewModel:(id)a0;
- (void)_loadUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setup;

@end
