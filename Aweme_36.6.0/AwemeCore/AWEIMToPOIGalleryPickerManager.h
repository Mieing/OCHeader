@class AWEIMPickerViewController, NSString, AWEIMPhotoPickerToolbarViewV2, AWEIMAssetGalleryPickerCustomConfig;

@interface AWEIMToPOIGalleryPickerManager : NSObject <AWEIMPickerViewControllerDataSource, AWEIMPickerlViewControllerDelegate, AWEIMPhotoPickerToolbarDelegate>

@property (retain, nonatomic) AWEIMPickerViewController *pickerViewController;
@property (retain, nonatomic) AWEIMAssetGalleryPickerCustomConfig *config;
@property (retain, nonatomic) AWEIMPhotoPickerToolbarViewV2 *toolbarViewV3InPicker;
@property (retain, nonatomic) AWEIMPhotoPickerToolbarViewV2 *toolbarViewV3InPreview;
@property (copy, nonatomic) NSString *jumpCert;
@property (copy, nonatomic) NSString *albumCert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPhotoPickerViewControllerWithJumpBPEAToken:(id)a0 albumBpeaToken:(id)a1 customConfig:(id)a2;
- (void)p_openPicker;
- (void)p_requestAuthorizationComplete:(id /* block */)a0;
- (id)createCategory;
- (id)picker:(id)a0 bottomToolViewWithConfig:(id)a1;
- (double)picker:(id)a0 bottomToolHeightWithConfig:(id)a1;
- (id)preview:(id)a0 bottomToolViewWithConfig:(id)a1;
- (double)preview:(id)a0 bottomToolHeightWithConfig:(id)a1;
- (void)picker:(id)a0 allAssetLoadComplete:(id)a1;
- (void)picker:(id)a0 didOperateAsset:(id)a1 selected:(BOOL)a2 totalCount:(long long)a3;
- (void)picker:(id)a0 selectOrigin:(BOOL)a1;
- (void)onPickerToolbar:(id)a0 didTappedWithActionType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
