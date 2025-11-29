@class UIScrollView, UIView, UIImageView, UIButton, AWEIMFansGroupIntroduceModel, YYLabel, AWEIMFansGroupAdvantageDescView, AVPlayer;

@interface AWEIMFansGroupIntroduceViewController : UIViewController

@property (retain, nonatomic) UIScrollView *bgScrollView;
@property (retain, nonatomic) YYLabel *creatorNumLabel;
@property (retain, nonatomic) UIImageView *videoPlaceholderImageView;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AWEIMFansGroupAdvantageDescView *introduceDescView;
@property (retain, nonatomic) UIButton *faqButton;
@property (retain, nonatomic) AWEIMFansGroupIntroduceModel *model;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__themeChange;
- (void)__updateCreatorNumLabel;
- (void)__updateVideoResource;
- (void)__updateDescViewFrame;
- (void)__updateFAQTitle;
- (void)__configPlayerWithUrl:(id)a0;
- (void)__playbackFinished:(id)a0;
- (void)__openFAQPage;
- (void)updateDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
