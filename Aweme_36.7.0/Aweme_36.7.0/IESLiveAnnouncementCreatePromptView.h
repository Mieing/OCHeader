@class IESLiveAnnouncementVacantView, UIViewController, IESLiveAnnouncementViewModel;

@interface IESLiveAnnouncementCreatePromptView : IESLiveAnnouncementPageView

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) IESLiveAnnouncementVacantView *vacantView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completion;

+ (long long)popupItemType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 viewController:(id)a2;
- (void)hideAndOpenListPageIfNeeded;
- (void)showProfileExtensionGuideViewIfNeeded;
- (void)publishAnnouncementIfNeeded;
- (void)cancelDidTapped;
- (void)addRemindDidTapped;
- (id)createButtons;
- (id)titleForNavBar;
- (id)rightActionsForNavBar;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
