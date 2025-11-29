@class UIImageView, AWEIMGroupDefaultAvatarView, AWEIMBottomShareTipsHorizontalMultiAvatarView, UILabel, UIView;

@interface AWEIMBottomShareTipsView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEIMGroupDefaultAvatarView *groupDefaultAvatarView;
@property (retain, nonatomic) AWEIMBottomShareTipsHorizontalMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *onTapAreaView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) double zoomScale;
@property (nonatomic) double labelHeight;
@property (nonatomic) double preferredHeight;

- (id)initWithTitleText:(id)a0 tipsText:(id)a1 imageUrlList:(id)a2 trailingIcon:(id)a3;
- (id)initWithTitleText:(id)a0 tipsText:(id)a1 leftAvatarURL:(id)a2 rightAvatarURL:(id)a3 trailingIcon:(id)a4;
- (void)updateLeftAvatarURL:(id)a0 rightAvatarURL:(id)a1;
- (id)initWithTitleText:(id)a0 tipsText:(id)a1 tagText:(id)a2 leadingImageUrl:(id)a3 trailingIcon:(id)a4 needCorner:(BOOL)a5;
- (id)onTapArea;
- (void)updateTipsLabelWithText:(id)a0;
- (void)p_createUIComponentsWithStyle:(unsigned long long)a0 avatarCount:(unsigned long long)a1;
- (void)p_makeConstraintsWithStyle:(unsigned long long)a0 avatarCount:(unsigned long long)a1;
- (void)p_configWithText:(id)a0 tipsText:(id)a1 imageUrlList:(id)a2 trailingIcon:(id)a3;
- (void)p_createUIComponentsWithStyle:(unsigned long long)a0;
- (void)p_makeConstraintsWithStyle:(unsigned long long)a0;
- (void)p_configWithText:(id)a0 tipsText:(id)a1 tagText:(id)a2 leadingImageUrl:(id)a3 cornerRadius:(double)a4 trailingIcon:(id)a5;
- (void)p_configWithText:(id)a0 tipsText:(id)a1 leadingImageUrl:(id)a2 cornerRadius:(double)a3 trailingIcon:(id)a4;
- (void)p_configWithText:(id)a0 tipsText:(id)a1 leftAvatarURL:(id)a2 rightAvatarURL:(id)a3 trailingIcon:(id)a4;
- (void)p_configWithText:(id)a0 tipsText:(id)a1 leadingImage:(id)a2 trailingIcon:(id)a3;
- (double)p_adaptValueWithRawValue:(double)a0;
- (id)initWithTitleText:(id)a0 tipsText:(id)a1 leadingImageUrl:(id)a2 trailingIcon:(id)a3 needCorner:(BOOL)a4;
- (void).cxx_destruct;

@end
