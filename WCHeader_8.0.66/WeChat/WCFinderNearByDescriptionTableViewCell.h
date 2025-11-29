@class UIButton;

@interface WCFinderNearByDescriptionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *descriptionLabel;

+ (double)descriptionCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)hideDescriptionLabel:(BOOL)a0;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)updateWith:(id)a0;
- (void).cxx_destruct;

@end
