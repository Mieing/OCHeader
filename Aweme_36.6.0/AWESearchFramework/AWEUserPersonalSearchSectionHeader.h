@class UILabel, NSString, UIView;

@interface AWEUserPersonalSearchSectionHeader : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) BOOL needDivider;

- (void)configSubview;
- (id)initWithTitle:(id)a0 needDivider:(BOOL)a1;
- (void).cxx_destruct;

@end
