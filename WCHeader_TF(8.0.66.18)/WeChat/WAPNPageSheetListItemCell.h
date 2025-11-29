@class UIImageView, UILabel, UIView, PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo;

@interface WAPNPageSheetListItemCell : MMTableViewCell

@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) UILabel *describeLabel;
@property (retain, nonatomic) UIImageView *toggleImageView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo *info;

+ (double)viewHeight;
+ (double)edgeLR;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)markBottom;
- (void)markUnBottom;
- (void)toggle;
- (void)unToggle;
- (void)fillPhoneInfo:(id)a0;
- (void).cxx_destruct;

@end
