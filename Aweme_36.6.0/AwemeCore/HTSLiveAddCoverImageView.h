@class HTSLiveGradientBackgroundView, CAGradientLayer, UIImageView, UILabel, IESLiveGuideContentPanelModel;

@interface HTSLiveAddCoverImageView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *topLeftLabel;
@property (retain, nonatomic) IESLiveGuideContentPanelModel *panelModel;
@property (nonatomic) BOOL isMediaLive;
@property (nonatomic) BOOL isInToolBar;
@property (retain, nonatomic) UILabel *aiOptLabel;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (nonatomic) BOOL vertical;
@property (nonatomic) BOOL useAutoCover;
@property (nonatomic) BOOL isDisableUploadCover;

- (void)setCoverImage:(id)a0;
- (id)currentCoverImage;
- (void)renderUI;
- (id)initWithMediaLive:(BOOL)a0 isInToolBar:(BOOL)a1 panelModel:(id)a2;
- (id)initWithMediaLive:(BOOL)a0 panelModel:(id)a1;
- (void)setCoverImageWithURLs:(id)a0;
- (void)setCoverImageStatus:(long long)a0;
- (void)hideIndicatorIfNeeded;
- (void)updateAiTipLabel:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
