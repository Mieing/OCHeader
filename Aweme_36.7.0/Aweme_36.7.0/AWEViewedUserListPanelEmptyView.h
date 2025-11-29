@class UIImageView, UILabel, NSString;

@interface AWEViewedUserListPanelEmptyView : UIView

@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;

- (BOOL)currentThemeIsDark;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithTitle:(id)a0 subTitle:(id)a1;

@end
