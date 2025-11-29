@class UIImageView, UILabel;

@interface AWEECOMIMFooterCareNoticeButton : UIControl

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) int buttonStatus;
@property (nonatomic) unsigned long long type;

- (void)updateWithButtonStatus:(int)a0 buttonStyle:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
