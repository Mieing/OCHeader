@class UIView;

@interface AWEFriendStyleBaseCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isInsStyle;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isInsStyle:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
