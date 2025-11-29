@class NSString;
@protocol AWELeftSideBarAmbienceObjectProtocol;

@interface AWEProfileSideBarComponent : AWEUserHomeBaseComponent <AWELeftSideBarEntranceViewModelProtocol, AWEProfileSettingComponentProtocol>

@property (retain, nonatomic) id<AWELeftSideBarAmbienceObjectProtocol> ambienceObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (BOOL)isShowSliderMenuView;
- (void)resetSliderMenu;
- (void)onFindMoreExtensionAreaCardClicked;
- (void)onSliderMenuButtonClicked:(id)a0 highlightItemType:(long long)a1;
- (void)openSidebarBySchema:(id)a0;
- (BOOL)isRotationSupported;
- (void)p_openSidebarBySchema:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)onInit;
- (void)viewWillDisappear;

@end
