@class UILabel, NSString;

@interface AWEUniversalCleanHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *cleanSizeLabel;
@property (retain, nonatomic) UILabel *percentLabel;
@property (nonatomic) float cleneSize;
@property (copy, nonatomic) NSString *percentDesc;
@property (nonatomic) long long progress;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
