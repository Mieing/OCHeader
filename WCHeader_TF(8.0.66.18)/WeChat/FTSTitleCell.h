@class UILabel, UIView;

@interface FTSTitleCell : MMTableViewCell {
    UILabel *_titleLabel;
    UIView *_topLine;
    UIView *_lineView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateTitle:(id)a0;
- (double)getTopMargin;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
