@class UIImageView, UILabel, NSDictionary;
@protocol AWESearchKeyboardAISearchDelegate;

@interface AWESearchKeyboardAISearchElement : AWESearchKeyboardBaseElement

@property (retain, nonatomic) UIImageView *iconView;
@property (weak, nonatomic) id<AWESearchKeyboardAISearchDelegate> delegate;
@property (nonatomic) BOOL isNewUI;
@property (retain, nonatomic) UILabel *title;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) NSDictionary *uiInfo;

- (void)setupNewUI;
- (void)setImageWithThemeStyle:(long long)a0;
- (void)elementClick;
- (void)setNewImageWithThemeStyle:(long long)a0;
- (id)pagePositionWithType:(long long)a0;
- (void)jumpToAIGC;
- (void)checkLoginWithBlock:(id /* block */)a0;
- (id)enterFromWithPositionType:(long long)a0;
- (void)hostVC_setupContext:(id)a0;
- (void)hostVC_updateContext:(id)a0;
- (void)host_elementViewDidSetup;
- (void)host_themeChange:(id)a0;
- (void)host_tabbarHidden:(BOOL)a0;
- (void)host_elementViewUpdateNewUISize:(struct CGSize { double x0; double x1; })a0 leftOffset:(double)a1 hasText:(BOOL)a2 uiInfo:(id)a3;
- (void).cxx_destruct;
- (id)titleText;
- (id)init;
- (id)iconImage;
- (void)setupUI;

@end
