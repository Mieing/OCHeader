@class UIImageView, UILabel;
@protocol ACCMVTemplateModelProtocol;

@interface AWEAlbumSelectTemplateCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) double imageViewHeight;

+ (id)descLabelFont;
+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;
+ (double)p_coverImageRatioWithTemplateModel:(id)a0;
+ (id)titleLabelFont;
+ (id)cellIdentifier;

- (void)updateWithTemplateModel:(id)a0;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
