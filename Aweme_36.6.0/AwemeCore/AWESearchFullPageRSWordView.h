@class UIImageView, UILabel, AWESearchAnchorModel, UIButton;

@interface AWESearchFullPageRSWordView : UIView

@property (retain, nonatomic) UIButton *rsButton;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWESearchAnchorModel *wordModel;
@property (copy, nonatomic) id /* block */ rsClickedCallback;

+ (double)widthWithWordModel:(id)a0;
+ (void)registerViewColorForThemeStyle;
+ (void)registerTextColorForThemeStyle;
+ (double)searchIconWidth;

- (void)buttonClicked;
- (id)initWithAnchorModel:(id)a0;
- (void)configUI;
- (void).cxx_destruct;

@end
