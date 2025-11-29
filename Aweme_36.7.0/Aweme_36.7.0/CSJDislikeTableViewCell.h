@class UIImageView, UILabel, UIView;

@interface CSJDislikeTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *nextImg;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *sepLine;

- (void)refleshUIWithModel:(id)a0 hiddenSep:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;

@end
