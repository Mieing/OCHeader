@class UILabel, UIView;

@interface IESLivePlaybackPortraitSelectCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *customView;

+ (id)identifier;

- (void)updateData:(id)a0 selected:(BOOL)a1;
- (void)updateAttributedData:(id)a0 selected:(BOOL)a1;
- (void)updateWithView:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setup;

@end
