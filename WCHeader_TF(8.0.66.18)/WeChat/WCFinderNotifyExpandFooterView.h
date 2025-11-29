@class UILabel, MMUIButton;

@interface WCFinderNotifyExpandFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *expandButton;
@property (copy, nonatomic) id /* block */ expandActionBlock;

+ (double)cellHeight;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;
- (void)expandButtonClicked:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
