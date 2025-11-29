@class UIImageView, UILabel, MMUIButton, UIButton;
@protocol MMAlbumAccessAuthViewDelegate;

@interface MMAlbumAccessAuthView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *openSettingButton;
@property (retain, nonatomic) MMUIButton *showLimitPhotoButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUIButton *wechatAuthButton;
@property (nonatomic) BOOL showWechatAuthStyle;
@property (weak, nonatomic) id<MMAlbumAccessAuthViewDelegate> delegate;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL isWechatAuthorized;
@property (nonatomic) unsigned long long authScene;

- (void)updateContent;
- (void)initViewForWechatNotAuth;
- (void)initViewForSystemNotAuth;
- (void)layoutSubviews;
- (void)onOpenSetting:(id)a0;
- (void)onShowLimitedPhoto:(id)a0;
- (void)onRequestWechatAuth:(id)a0;
- (void).cxx_destruct;

@end
