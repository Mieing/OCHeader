@class UIView, NSString, NSArray, HTSLiveArtTextLabel, UIImageView, CAGradientLayer, IESLiveDanmakuGiftViewModel, UILabel;
@protocol IESEZDanmakuViewDelegate;

@interface IESLiveDanmakuGiftView : IESLiveDanmakuBaseView <IESEZDanmakuViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboXLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (nonatomic) double backgroundWidth;
@property (copy, nonatomic) NSArray *groupColorArr;
@property (nonatomic) unsigned long long groupIndex;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientViewLayer;
@property (retain, nonatomic) IESLiveDanmakuGiftViewModel *viewModel;
@property (weak, nonatomic) id<IESEZDanmakuViewDelegate> danmakuViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableLocalizations;
- (void)loadUI;
- (void)refreshContentWithViewModel:(id)a0;
- (void)refreshDanmakuWithViewModel:(id)a0;
- (void)setUpGroup;
- (void)p_updateColorIndexWithPrice:(unsigned long long)a0;
- (id)gradientViewLayerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setup;

@end
