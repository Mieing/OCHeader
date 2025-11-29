@class UIImageView, UILabel, UIView;

@interface AWEPLVSingleButtonHeaderButtonView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *buttonIcon;
@property (retain, nonatomic) UILabel *buttonLabel;

- (void)configHeaderType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
