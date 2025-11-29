@class UIImageView, UILabel, UIView;
@protocol AWEIMFansGroupTopDynamicDomainDelegateProtocol;

@interface AWEIMFansGroupTopDynamicDomainTemplateView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL hasRedDot;
@property (weak, nonatomic) id<AWEIMFansGroupTopDynamicDomainDelegateProtocol> delegate;

- (void)layoutSubviews;
- (void)configWithLightIconURL:(id)a0 DarkIconURL:(id)a1 style:(long long)a2 labelText:(id)a3 ignoreTheme:(BOOL)a4;
- (void)setupBackgroundImageViewWithLightUrl:(id)a0 darkUrl:(id)a1 ignoreTheme:(BOOL)a2;
- (void)addDotView;
- (void)hideDotView;
- (void)__jumpToScheme;
- (void).cxx_destruct;
- (void)setLabelFont:(id)a0;
- (id)init;
- (void)setupUI;
- (void)setLabelColor:(id)a0;
- (double)titleWidth;

@end
