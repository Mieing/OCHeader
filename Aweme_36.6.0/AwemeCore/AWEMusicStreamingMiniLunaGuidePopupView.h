@class UIImageView, AWEMusicDSPEventModel, UILabel, UIView, UIButton;
@protocol AWESettingSwitchProtocol;

@interface AWEMusicStreamingMiniLunaGuidePopupView : AWEMusicStreamingBasePopupView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *activeTipsSwitch;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *linkBtn;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;

- (void)showInView:(id)a0 duration:(double)a1;
- (void)switchControlDidChanged:(id)a0;
- (id)initWithEventModel:(id)a0;
- (id)customConfirmButton;
- (void)p_trackClickWithClickArea:(id)a0;
- (void)p_trackShowDiversion;
- (void)guideLinkJump;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
