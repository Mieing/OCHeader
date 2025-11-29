@class AWEIMComponentViewController, AWEIMPickerConfiguration, NSString;

@interface AWEIMPickerService : HTSService <AWEIMPickerService>

@property (weak, nonatomic) AWEIMComponentViewController *pickerVC;
@property (readonly, nonatomic) AWEIMPickerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewContainerWithPickerConfiguration:(id)a0 preViewConfiguration:(id)a1;
- (id)pickerWithConfiguration:(id)a0;
- (id)getSelectedLocalAssets;
- (id)getSelectedAssetIdentifiers;
- (void)finishSelecting;
- (void)selectCurrentShowingAssetInPreviewVC;
- (void)setOriginSelect:(BOOL)a0;
- (void)jumpToEditPage;
- (void)newJumpToEditPageWithScene:(long long)a0 context:(id)a1;
- (void)jumpToPreviewPageWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
