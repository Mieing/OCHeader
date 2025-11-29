@class UIImageView, YYLabel, UIView;

@interface AWESearchBottomBarPanelWordCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *wordLabel;
@property (nonatomic) BOOL isLast;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIImageView *closeIconView;
@property (copy, nonatomic) id /* block */ didTappedCloseBtnBlock;

+ (id)identifier;

- (double)searchIconSize;
- (BOOL)enableSearchBigModeV3;
- (BOOL)enableSearchBigMode;
- (id)textFontWithPreferVal:(double)a0;
- (void)didTapCloseBtn;
- (void)configWithWord:(id)a0 isLast:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
