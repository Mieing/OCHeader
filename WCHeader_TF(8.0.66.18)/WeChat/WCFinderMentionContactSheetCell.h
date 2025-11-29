@class UIImageView, FavAttributeCPLabel;

@interface WCFinderMentionContactSheetCell : UITableViewCell

@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) FavAttributeCPLabel *titleLabel;
@property (retain, nonatomic) FavAttributeCPLabel *summaryLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutIfNeeded;
- (void)_doLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTitle:(id)a0 avatarUrl:(id)a1 desc:(id)a2 hightlightDesc:(id)a3;
- (void).cxx_destruct;

@end
