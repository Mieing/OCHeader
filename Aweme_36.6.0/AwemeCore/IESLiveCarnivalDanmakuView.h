@class IESLiveDanmakuNormalLabel, NSString, UIImageView, UIView;
@protocol IESLiveWebPPlayer, IESLiveLanguageService;

@interface IESLiveCarnivalDanmakuView : IESLiveDanmakuBaseView <IESLiveEZDanmakuViewProtocol>

@property (retain, nonatomic) IESLiveDanmakuNormalLabel *contentLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *backgroundImgView;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIView *labelContent;
@property (nonatomic) double cacheDanmukuWidth;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTime:(double)a0;
- (void)refreshContentWithViewModel:(id)a0;
- (void)updateWithNode:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupViews;

@end
