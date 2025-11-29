@class AWEHomePageRemoteCommonCardDataModel, NSString, UIImageView, AWEHomePageRemoteContext, UILabel, AWEHomePageRemoteItemDataModel;

@interface AWEHomePageRemoteCard : UIView <AWEHomePageRemoteViewProtocol>

@property (retain, nonatomic) AWEHomePageRemoteContext *context;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *mainContentLabel;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) AWEHomePageRemoteItemDataModel *originItemDataModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonCardDataModel *cardDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewBackgroundColor;
- (void)updateImageAndColor;
- (void)updateWithItemDataModel:(id)a0;
- (void)updateWithItemDataModel:(id)a0 context:(id)a1;
- (double)homePageRemoteViewHeight;
- (void)homePageThemeDidChange:(long long)a0;
- (void)reloadWhenPanelShowWithItemDataModel:(id)a0;
- (id)mainContentLabelTextColor;
- (id)subContentLabelTextColor;
- (id)arrowIconPlaceholderImage;
- (id)mainPlaceholderImage;
- (id)mainContentLabelFont;
- (id)subContentLabelFont;
- (id)mainImageUrlArray;
- (id)arrowIconImageUrlArray;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
