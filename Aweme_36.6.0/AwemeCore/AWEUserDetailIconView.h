@class UIImageView, UILabel;

@interface AWEUserDetailIconView : UIControl

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *addImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL isFromFamiliar;

+ (Class)aAWEUserProfileMutiTargetConfigCommonAdapterClass;

- (id)aAWEUserProfileMutiTargetConfigCommonAdapter;
- (double)imageViewLeftPadding;
- (double)imageViewTopBottomPadding;
- (struct CGSize { double x0; double x1; })addImageSize;
- (void)relayoutTextLabel;
- (double)textLabelRightPadding;
- (void)updateFCollectFollow:(BOOL)a0;
- (double)textLabelFontSize;
- (void)switchToFollow:(long long)a0;
- (void)switchToSendMsgWithUser:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkTheme;
- (struct CGSize { double x0; double x1; })imageViewSize;

@end
