@class UILabel;

@interface AWERVLVIntroductionTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *introductionLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)updateTopPadding:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
