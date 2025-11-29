@class UIImageView, UILabel;

@interface AWEIMLiveFansGroupInviteItem : UIView

@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UILabel *lable;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isChecked;

- (void)__setupUI;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 text:(id)a1;

@end
