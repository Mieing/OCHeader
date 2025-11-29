@class UILabel, AWECommonSearchBar, UIView;

@interface AWEContactListTableViewHeader : UIView

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double suggestedHeight;
@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (nonatomic) BOOL showAllFollower;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL useNewUIStyle;

- (void)configSearchBar:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
