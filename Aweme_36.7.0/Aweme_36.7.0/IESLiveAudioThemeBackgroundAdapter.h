@class UIImage, IESLiveAudioBackgroundBaseModel, HTSLiveAudioBGData;
@protocol IESLiveRoomService;

@interface IESLiveAudioThemeBackgroundAdapter : NSObject

@property (retain, nonatomic) IESLiveAudioBackgroundBaseModel *dataModel;
@property (nonatomic) BOOL isThumbnail;
@property (retain, nonatomic) HTSLiveAudioBGData *bgData;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL themeEnabled;
@property (copy, nonatomic) id /* block */ dataModelUpdateAction;
@property (copy, nonatomic) id /* block */ abSource;
@property (nonatomic) long long audioThemeImgType;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) UIImage *defaultImage;

- (void)setImageAnimatedBg:(id)a0;
- (void)setGifImageData:(id)a0;
- (void)setVideoBgFileUrl:(id)a0;
- (void)setImageBg:(id)a0;
- (void)setDowngradingBg:(id)a0;
- (void)setBackgroundImageViewHidden:(BOOL)a0;
- (void)setBackgroundAnimatedImageViewHidden:(BOOL)a0;
- (void)setBackgroundVideoPlayerHidden:(BOOL)a0;
- (void)setBackgroundMaskViewHidden:(BOOL)a0;
- (void)setBackgroundInAuditMaskHidden:(BOOL)a0;
- (void)setBackgroundImageAlphaGradientHidden:(BOOL)a0;
- (void)setAnimatedBgImage:(id)a0;
- (void)setDowngradingBgImage:(id)a0;
- (id)initWithAudioBgData:(id)a0 isThumbnail:(BOOL)a1 abSource:(id /* block */)a2 updateAction:(id /* block */)a3;
- (void)updateRoomThemeImageBgUrls:(id)a0 imageAnimatedBgUrls:(id)a1 imageStaticBgUrls:(id)a2 audioThemeType:(long long)a3;
- (void)updateRoomThemeImageBg:(id)a0 imageAnimatedBg:(id)a1 imageStaticBg:(id)a2 audioThemeType:(long long)a3;
- (void)refreshTheme:(id)a0 isForce:(BOOL)a1 isAnchor:(BOOL)a2;
- (void)updateBackgroundIfNeededWithPlaceholderImage:(id)a0;
- (void)updateBackgroundImageViewHidden:(BOOL)a0;
- (void)updateWithThemeEnabled:(BOOL)a0;
- (void)updateWithStrategy:(id)a0;
- (void)setupWithAvailableBgData:(id)a0 isAnchor:(BOOL)a1;
- (long long)bgTypeWithAudioBGData:(id)a0;
- (void)setupAnimatedBgWithAvailableData:(id)a0 isAnchor:(BOOL)a1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundType:(long long)a0;
- (long long)backgroundType;
- (void)setPlaceholderImage:(id)a0;
- (BOOL)isVideo;
- (void)clean;
- (void)setBgImage:(id)a0;

@end
