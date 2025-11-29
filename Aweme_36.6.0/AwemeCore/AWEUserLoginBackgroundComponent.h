@class AWEUserLoginBaseViewModel, AWEUserLoginBackgroundView, NSString;

@interface AWEUserLoginBackgroundComponent : NSObject <AWEUserBackgroundViewComponentProtocal>

@property (retain, nonatomic) AWEUserLoginBackgroundView *bgView;
@property (readonly, nonatomic) AWEUserLoginBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (void)showHeaderView;
- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (BOOL)shouldSetupDifferentiatingTheme;
- (id)aAWEUserLoginThemeAdapter;
- (void)setupHalfScreenComponentView;
- (void)setupFullScreenComponentView;
- (BOOL)isAvatarPanelStyle;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;
- (void)hideHeaderView;
- (void)updateModel;

@end
