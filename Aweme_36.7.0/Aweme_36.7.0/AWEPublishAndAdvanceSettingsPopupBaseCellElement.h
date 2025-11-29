@protocol AWEPublishAndAdvanceSettingsPopup, IESServiceProvider;

@interface AWEPublishAndAdvanceSettingsPopupBaseCellElement : AWEPostPageCellElement

@property (weak, nonatomic) id<AWEPublishAndAdvanceSettingsPopup> popup;
@property (weak, nonatomic) id<IESServiceProvider> serviceContainer;

+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (long long)registerScene:(id)a0;

- (void)bindServices:(id)a0;
- (void)didSwitcherToggled:(BOOL)a0 completion:(id /* block */)a1;
- (void)didTipButtonClicked;
- (void).cxx_destruct;
- (id)description;
- (void)reload;
- (id)indexPath;

@end
