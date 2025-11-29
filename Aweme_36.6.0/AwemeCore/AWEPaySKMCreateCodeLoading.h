@class UIImageView, UILabel;

@interface AWEPaySKMCreateCodeLoading : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *label;

- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithText:(id)a0;
- (void)stopLoading;
- (void)setupUI;

@end
