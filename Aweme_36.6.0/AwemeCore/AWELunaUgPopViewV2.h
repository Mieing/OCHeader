@class UIStackView, YYLabel, UIImageView, UILabel, UIView, UIButton;

@interface AWELunaUgPopViewV2 : AWELunaUgPopView

@property (retain, nonatomic) UILabel *popViewTitleLabel;
@property (retain, nonatomic) UILabel *popViewSubTitleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *songCoverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleSubscriberTag;
@property (retain, nonatomic) UILabel *titleHDTag;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIButton *gotoMiniLunaBtn;
@property (retain, nonatomic) UIStackView *btnStackView;
@property (retain, nonatomic) YYLabel *relatedMusicTagLabel;
@property (retain, nonatomic) UIImageView *lunaLogoImageView;
@property (retain, nonatomic) UIView *songInfoContainerView;
@property (retain, nonatomic) UILabel *songNameLabel;
@property (retain, nonatomic) UILabel *artistLabel;
@property (retain, nonatomic) UIImageView *songInfoArrowView;
@property (retain, nonatomic) UIView *clickAreaContainerView;

- (id)lunaIconImageView;
- (id)p_lightColorNamed:(id)a0;
- (void)p_didClickMainButton;
- (void)p_didClickCover;
- (void)p_didClickMainLabel;
- (void)p_didClickSubTitle;
- (void)p_didClickCoverMiniEntrance;
- (void)p_didClickLeftButton;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
