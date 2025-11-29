@class UIButton, NSString, AWECloudAlbumDetailNavigationLeftView, AWECloudAlbumDetailNavigationRightView, AWECloudAlbumDetailNavigationViewModel;
@protocol AWECloudAlbumDetailDataServiceProtocol, AWEACCPopoverActionSheetHandlerProtocol, AWECloudAlbumDetailListServiceProtocol;

@interface AWECloudAlbumDetailNavigationComponent : AWECloudAlbumDetailBaseComponent <AWECloudAlbumDetailNavigationLeftViewDelegate, AWECloudAlbumDetailNavigationRightViewDelegate, AWECloudAlbumDetailDataAlbumServiceSubscriber, AWECloudAlbumDetailDataTaskServiceSubscriber, AWECloudAlbumDetailListServiceSubscriber>

@property (weak, nonatomic) id<AWECloudAlbumDetailDataServiceProtocol> dataService;
@property (weak, nonatomic) id<AWECloudAlbumDetailListServiceProtocol> listService;
@property (retain, nonatomic) AWECloudAlbumDetailNavigationViewModel *viewModel;
@property (readonly, nonatomic) UIButton *backButton;
@property (readonly, nonatomic) AWECloudAlbumDetailNavigationLeftView *leftView;
@property (readonly, nonatomic) AWECloudAlbumDetailNavigationRightView *rightView;
@property (weak, nonatomic) id<AWEACCPopoverActionSheetHandlerProtocol> popoverMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void)backAction:(id)a0;
- (void)componentDidLoad;
- (void)dataDidChangeAlbumWithService:(id)a0;
- (void)dataDidChangeTaskStatusWithService:(id)a0;
- (void)dataDidChangeTaskProgressWithService:(id)a0;
- (void)dataService:(id)a0 didChangeItems:(id)a1;
- (void)listDidChangeDataWithService:(id)a0;
- (void)listDidChangeSelectModeWithService:(id)a0;
- (void)listDidChangeSelectionWithService:(id)a0;
- (void)p_updateViewStateAnimated:(BOOL)a0;
- (void)trackSelectAllBtn:(BOOL)a0;
- (void)addContentAction;
- (void)changeTitleAction;
- (void)deleteAlbumAction;
- (void)navigationLeftViewDidClickSelectAll:(id)a0;
- (void)navigationRightViewDidClickSelect:(id)a0;
- (void)navigationRightViewDidClickCancel:(id)a0;
- (void)navigationRightViewDidClickMore:(id)a0;
- (void).cxx_destruct;

@end
