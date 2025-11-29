@class AWEHotSpotPublishEntranceShadowView, UIImageView, UILabel, UIView;

@interface AWEHotSpotPublishEntranceDoubleItemView : AWEHotSpotPublishEntranceBaseView

@property (retain, nonatomic) UIView *leftBgView;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *leftText;
@property (retain, nonatomic) UIView *rightBgView;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *rightText;
@property (retain, nonatomic) AWEHotSpotPublishEntranceShadowView *shadowView;
@property (nonatomic) long long viewType;

- (void)onShotClicked;
- (void)onDiscussClicked;
- (void)setupSubViews;
- (void)updateBarRightTextContent:(id)a0;
- (void)_setupLayoutForSubViews;
- (void)_setupContentForSubviews;
- (void)setupClickedAction;
- (void)_updateLayoutForLeftPart:(id)a0;
- (void)configUIStyle;
- (void)_addColorForView;
- (void)_addShadowsForView;
- (void)_addCornerForView;
- (id)initWithBarType:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
