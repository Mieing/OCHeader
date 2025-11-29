@class UIImageView, UIImage, UILabel, UIView;

@interface ACCRichTextSocialToolbarMentionItemCell : ACCRichTextSocialToolbarBaseItemCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *loadingLabelFakeView;
@property (retain, nonatomic) UIView *loadingImageFakeView;
@property (retain, nonatomic) UIImage *placeholderImage;

+ (struct CGSize { double x0; double x1; })maxContentDisplaySize;
+ (struct CGSize { double x0; double x1; })sizeWithUser:(id)a0;

- (void)configWithUser:(id)a0 isSelected:(BOOL)a1 style:(long long)a2;
- (void)updateCellColorStyle:(long long)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setup;

@end
