@class UILabel, NSString;

@interface DUXSelectionPanelTableViewTitleHeader : DUXSelectionPanelTableViewHeader

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long enlargeType;

- (void).cxx_destruct;
- (double)headerHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
