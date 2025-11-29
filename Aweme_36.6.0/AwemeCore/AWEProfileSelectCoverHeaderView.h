@class UILabel, UIButton, NSString;

@interface AWEProfileSelectCoverHeaderView : UICollectionReusableView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) NSString *awemeSourceText;
@property (copy, nonatomic) NSString *routerSchema;

- (void)didClickRightButton;
- (void)refreshWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
