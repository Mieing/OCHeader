@class NSMutableArray, IESLiveAnnouncementViewModel, IESLiveAnnouncementSettingContainerView, UIViewController;

@interface IESLiveAnnouncementDisplaySettingView : IESLiveAnnouncementPageView

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) IESLiveAnnouncementSettingContainerView *settingView;
@property (retain, nonatomic) NSMutableArray *sectionModels;

+ (long long)popupItemType;

- (void)setupSections;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 viewController:(id)a2;
- (id)titleForNavBar;
- (void)setupLiveStickerSection;
- (void)setupProfileExtensionSection;
- (id)leftActionsForNavBar;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
