@class UILabel;

@interface AWELunaUgLyricsCell : UITableViewCell

@property (retain, nonatomic) UILabel *title;

- (void)configSubviews;
- (void)updateTitle:(id)a0 isHighlight:(BOOL)a1 highlightColor:(id)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
