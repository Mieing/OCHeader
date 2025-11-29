@class UIImageView, UILabel, AWEIMMessageConversation;

@interface AWEIMShareRowsCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;

- (id)aAWEBrandColorAdapter;
- (void)cofigWithCellType:(long long)a0;
- (void).cxx_destruct;

@end
