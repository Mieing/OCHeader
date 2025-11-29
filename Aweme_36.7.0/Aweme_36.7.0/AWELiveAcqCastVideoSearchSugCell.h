@class UIImageView, UILabel;

@interface AWELiveAcqCastVideoSearchSugCell : UITableViewCell

@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UILabel *searchLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
