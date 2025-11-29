@class AWEUserListGeneralCellView;

@interface AWEUserListGeneralTableViewCell : AWEIMSwipeTableViewCell

@property (retain, nonatomic) AWEUserListGeneralCellView *basicView;

+ (id)identifier;

- (void)setupWithConfig:(id)a0;
- (BOOL)trackColorRingShow;
- (void)didEndDisplayingCell;
- (void)calculateCellLayout:(id)a0;
- (void)highlightWithColor:(id)a0 completion:(id /* block */)a1;
- (void)didBindToColorRingView;
- (void)highlightWithColor:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
