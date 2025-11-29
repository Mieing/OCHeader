@class UILabel, UIButton, NSString;
@protocol AWEEcommerceSearchSwitchAddressDelegate;

@interface AWEEcommerceSearchInstantPopoverView : UIView

@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *lastCharLabel;
@property (retain, nonatomic) UIButton *switchBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) NSString *addressStr;
@property (weak, nonatomic) id<AWEEcommerceSearchSwitchAddressDelegate> delegate;

- (void)switchAddressButtonTap;
- (void)closeButtonTap;
- (double)getLocationWidth;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (void)setupViews;

@end
