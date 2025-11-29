@class UILabel, UIImageView, UIView;

@interface BDPChooseLocTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *labelTitle;
@property (retain, nonatomic) UILabel *labelContent;
@property (retain, nonatomic) UIImageView *chooseView;

- (void)setAttributeTextWithSelect:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
