@class DUXBaseLabel;

@interface AWENewsAISmartDislikeSectionHeader : UICollectionReusableView

@property (retain, nonatomic) DUXBaseLabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
