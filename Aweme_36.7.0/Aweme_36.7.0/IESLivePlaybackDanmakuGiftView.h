@class IESLiveDanmakuNormalLabel, UIImageView, UIView;
@protocol IESLiveLanguageService;

@interface IESLivePlaybackDanmakuGiftView : IESLivePlaybackDanmakuBaseView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESLiveDanmakuNormalLabel *contentLabel;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (nonatomic) double backgroundWidth;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;

- (void)disableLocalizations;
- (void)loadUI;
- (void)updateWithNode:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
