@class UIImageView, UILabel;

@interface AWEIMBaseListHeaderCell : UITableViewCell

@property (retain, nonatomic) UIImageView *functionIconView;
@property (retain, nonatomic) UILabel *functionNameLabel;
@property (retain, nonatomic) UIImageView *functionImageView;
@property (nonatomic) BOOL backgroundColorIsClear;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__updateLayoutWithIconShow:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
