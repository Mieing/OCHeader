@class UIImageView, IESLiveImageView, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveToolbarExpandView : UIView

@property (retain, nonatomic) UIView *shareItemView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *shareItemThemeView;
@property (retain, nonatomic) IESLiveImageView *shareItemIconView;
@property (retain, nonatomic) UIView *converContentView;
@property (nonatomic) BOOL hasloadThemeImage;

- (void)loadThemeIcon:(id)a0;
- (void)refreshThemeImage:(id)a0 iconImageJsonStr:(id)a1;
- (void)loadDefaultImage:(id)a0;
- (void)addConvertView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)loadThemeImageSuccess;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;
- (void)showAnimated:(BOOL)a0;

@end
