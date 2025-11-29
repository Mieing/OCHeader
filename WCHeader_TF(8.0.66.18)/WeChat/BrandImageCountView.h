@class UIImageView, MMUILabel;

@interface BrandImageCountView : UIStackView

@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) MMUILabel *imageCountLabel;

- (id)init;
- (void)setupUI;
- (void)updateImageCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end
