@class AWEIMPickerPreivewConfigration, NSString, UIView;
@protocol AWEIMPickerAssetSelectedProcessInterface;

@interface AWEIMPickerPreviewBottomToolPanelComponent : AWEIMComponentBase <AWEIMPickerPreviewListAction, AWEIMPickerPreviewBottomToolPanelInterface>

@property (retain, nonatomic) UIView *bottomViewContainer;
@property (retain, nonatomic) UIView *bottomContentView;
@property (nonatomic) double bottomViewHeight;
@property (retain, nonatomic) AWEIMPickerPreivewConfigration *previewConfig;
@property (retain, nonatomic) id<AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)setContainerHidden:(BOOL)a0;
- (id)previewVC;
- (void)collectionView:(id)a0 didTapCell:(id)a1 isPureMode:(BOOL)a2;
- (void)collectionView:(id)a0 videoCellDidEndPlaying:(id)a1;
- (void)selectCurrentShowingAsset;
- (void).cxx_destruct;

@end
