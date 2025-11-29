@class UILabel, UIView;

@interface AWEVSFormatTabTableViewHeaderView : UIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setup;
- (id)titleLabelFont;

@end
