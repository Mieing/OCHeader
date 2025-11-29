@class UIImageView, UILabel, UIView;

@interface AWEIMChatListPlaceHolderTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIImageView *placeHolderImageView;
@property (retain, nonatomic) UILabel *descLabel;

+ (id)identifier;

- (void)__setupUI;
- (void)configWithImageName:(id)a0 desc:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
