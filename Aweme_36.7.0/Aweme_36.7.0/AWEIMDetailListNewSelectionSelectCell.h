@class UIImageView, UIStackView;

@interface AWEIMDetailListNewSelectionSelectCell : AWEIMDetailListNewSelectionNormalCell

@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIImageView *selectImageView;

+ (struct CGSize { double x0; double x1; })itemSizeWithModel:(id)a0 context:(id)a1;
+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;

@end
