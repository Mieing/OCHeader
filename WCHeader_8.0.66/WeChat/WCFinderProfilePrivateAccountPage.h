@class UIImageView, UILabel;

@interface WCFinderProfilePrivateAccountPage : WCFinderStreamProfileViewPage

@property (retain, nonatomic) UIImageView *lockIconView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)loadView;
- (void)pageSizeDidChanged;
- (void)viewDidLoad;
- (void)reLayout;
- (void)updateLabelSize;
- (void).cxx_destruct;

@end
