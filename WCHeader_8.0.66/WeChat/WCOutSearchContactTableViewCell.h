@class AttributeLabel, MMHeadImageView;

@interface WCOutSearchContactTableViewCell : MMTableViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) AttributeLabel *nameLabel;
@property (retain, nonatomic) AttributeLabel *phoneLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)configureCellWithName:(id)a0 phone:(id)a1 mmusername:(id)a2 headImageURL:(id)a3 searchText:(id)a4;
- (void).cxx_destruct;

@end
