@class AWEStickerPickerDefaultUIConfiguration, ACCEditorGenericEffectPanelViewModel, UIView;
@protocol ACCOneClickFilmPanelTrackerService, ACCEditorOneClickFilmService;

@interface ACCOneClickFilmPanelComponent : ACCGenericEffectPanelComponent

@property (retain, nonatomic) AWEStickerPickerDefaultUIConfiguration *oneClickFilmPanelUIConfig;
@property (retain, nonatomic) ACCEditorGenericEffectPanelViewModel *oneClickFilmViewModel;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCOneClickFilmPanelTrackerService> oneClickFilmTrackerService;
@property (nonatomic) BOOL isEnterSegmentEdit;
@property (retain, nonatomic) UIView *previewSnapshotView;

- (void)componentDidAppear;
- (void)componentWillDisappear;
- (id)trackerService;
- (id)effectService;
- (BOOL)stickerPickerViewShouldSupportSearchFeature:(id)a0;
- (double)subViewHeight;
- (void)bindServices;
- (id)panelUIConfig;
- (void)createFavoriteViewWithSelectStatus:(BOOL)a0;
- (long long)getPrefetchCount;
- (void)setupFavoriteView;
- (id)currentSelectEffectRawModel;
- (BOOL)p_shouldShowFavoriteView;
- (id)panelDragConfigDict;
- (void).cxx_destruct;
- (id)currentScene;
- (id)viewModel;

@end
