@class UIImageView, AWEIMStreakPetElfWidgetGuideSmallAvatarView, UIView, UILabel, BDImageView;

@interface AWEIMStreakPetElfWidgetGuideImageView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *smallWidgetContainerView;
@property (retain, nonatomic) UIView *smallWidgetContainerBGView;
@property (retain, nonatomic) BDImageView *streakPetElfImageView;
@property (retain, nonatomic) UIImageView *streakIcon;
@property (retain, nonatomic) AWEIMStreakPetElfWidgetGuideSmallAvatarView *avatarImageView;
@property (retain, nonatomic) UILabel *chatDaysLabel;
@property (retain, nonatomic) UILabel *textLabel;

+ (id)loadImageOrderArray;

- (void)renderWithViewModel:(id)a0;
- (void)loadImageWithImageViewModel:(id)a0;
- (void)p_addTextLayerWithChatDaysText:(id)a0 labelText:(id)a1;
- (BOOL)p_checkCanShowImageWithStyle:(unsigned long long)a0 imageViewModel:(id)a1;
- (void)p_loadImageWithStyle:(unsigned long long)a0 imageViewModel:(id)a1;
- (id)p_getUrlWithStyle:(unsigned long long)a0 imageViewModel:(id)a1;
- (void)addGradientBackgroundWithDictionary:(id)a0 toView:(id)a1;
- (id)p_getWithoutBackgroundImageUrlWithImageViewModel:(id)a0;
- (void)showGuideImageAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
