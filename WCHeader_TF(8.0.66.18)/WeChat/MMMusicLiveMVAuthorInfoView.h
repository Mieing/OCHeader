@class UIButton, UIImageView, UILabel, UIView, MMWebImageView;
@protocol MMMusicLiveMVAuthorInfoViewDelegate;

@interface MMMusicLiveMVAuthorInfoView : UIView

@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *finderHintLabel;
@property (retain, nonatomic) UILabel *finderHintPreLabel;
@property (retain, nonatomic) UILabel *finderHintPostLabel;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UIView *headImageViewLayer;
@property (retain, nonatomic) UIButton *switchBtn;
@property (retain, nonatomic) UIImageView *switchLogoImageView;
@property (retain, nonatomic) UILabel *switchLabel;
@property (weak) id<MMMusicLiveMVAuthorInfoViewDelegate> delegate;

- (id)init;
- (void)layoutSubviews;
- (void)updateNickName:(id)a0 avatarUrl:(id)a1;
- (void)updateDescStr:(id)a0;
- (void)setSwitchBtnHidden:(BOOL)a0;
- (void)handleNicknameTap;
- (void)handleImageTap;
- (void)handleTapFinderHitLabel;
- (void)onClickSwitchBtn;
- (void).cxx_destruct;

@end
