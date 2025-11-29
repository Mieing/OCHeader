@class UILabel, UIImageView, NSString;

@interface BDPScreenCastSearchViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *markView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
