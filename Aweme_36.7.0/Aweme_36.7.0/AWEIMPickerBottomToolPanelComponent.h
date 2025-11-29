@class NSString, UIView;
@protocol AWEIMPickerAssetSelectedProcessInterface;

@interface AWEIMPickerBottomToolPanelComponent : AWEIMComponentBase <AWEIMPickerAssetSelectedProcessAction, AWEIMPickerAlbumListComponentAction>

@property (retain, nonatomic) UIView *bottomViewContainer;
@property (retain, nonatomic) UIView *bottomContentView;
@property (retain, nonatomic) id<AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)pickerConfig;
- (void)albumDidClickEntrance:(BOOL)a0;
- (void)onAssetProcessorDidSelectAssetIdentifier:(id)a0;
- (void)onAssetProcessorDidRemoveAssetIdentifier:(id)a0;
- (void)onAssetProcessorDidBatchRemoveIdentifiers:(id)a0;
- (id)pickerVC;
- (void)refreshBottomPanel;
- (void).cxx_destruct;

@end
