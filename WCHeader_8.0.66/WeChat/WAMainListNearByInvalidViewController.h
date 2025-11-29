@class UILabel, UIView;

@interface WAMainListNearByInvalidViewController : MMUIViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly, nonatomic) unsigned long long invalidType;

- (id)initWithInvalidType:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initCustomNavigationBar;
- (void)updateNavigationItems;
- (void)initContentView;
- (void)onReturn;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void).cxx_destruct;

@end
