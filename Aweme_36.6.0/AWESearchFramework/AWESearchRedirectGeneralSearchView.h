@class UIImageView, UILabel, UIView;

@interface AWESearchRedirectGeneralSearchView : UIView

@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UIImageView *entranceImageView;
@property (retain, nonatomic) UIView *topDivider;
@property (retain, nonatomic) UIView *imageBgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)configureUI;
- (id)searchIconImageName;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (BOOL)isDarkTheme;
- (void)updateWithTitle:(id)a0;

@end
