@class UIImageView, DUXBaseLabel, UIView;

@interface AWESearchScanGraphicSugCell : DUXBaseTableViewCell

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIImageView *completeIcon;
@property (retain, nonatomic) DUXBaseLabel *wordLabel;
@property (retain, nonatomic) DUXBaseLabel *tagLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) BOOL supportDarkTheme;
@property (nonatomic) unsigned long long cellStyle;
@property (copy, nonatomic) id /* block */ completeTextBlock;

+ (id)reuseIdentifier;

- (void)updateWithCellModel:(id)a0;
- (void)updateWithWord:(id)a0 andPrefix:(id)a1;
- (void)updateWithWord:(id)a0 andTag:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)completeText;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)colorNamed:(id)a0;
- (void)setupSubviews;

@end
