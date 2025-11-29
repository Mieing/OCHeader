@class UILabel, NSString, UIView;

@interface AWETopVideoEntranceView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)setupSubviews;
- (void)updateTitle:(id)a0;

@end
