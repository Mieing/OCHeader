@class UIImageView, BDPGameUserScopePopupConfig, UIView;

@interface BDPGamePermissionContentView : UIView

@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) BDPGameUserScopePopupConfig *config;
@property (retain, nonatomic) UIImageView *authPopImageView;
@property (retain, nonatomic) UIView *lastObject;

- (void)updateContentLayout;
- (id)initWithConfig:(id)a0 isLandscape:(BOOL)a1;
- (id)selectedScopes;
- (id)unselectedScopes;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
