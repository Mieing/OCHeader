@class AWEIMAlbumScrollingIndicatorManager, NSString;

@interface AWEIMPickerScrollIndicatorComponent : AWEIMComponentBase <AWEIMAssetListComponentAction, AWEIMPickerSlideTabComponentAction, AWEIMAlbumScrollingIndicatorManagerDelegate>

@property (retain, nonatomic) AWEIMAlbumScrollingIndicatorManager *indicatorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)contentScrollViewDidScroll:(id)a0;
- (void)slideDidScrollToCategoryAtIndex:(long long)a0;
- (id)pickerVC;
- (void)categoryScrollViewDidEndDecelerating:(id)a0;
- (void)contentScrollViewDidEndDecelerating:(id)a0;
- (void)contentScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onPhotoPickerListSelectAsset:(id)a0;
- (void).cxx_destruct;
- (double)bottomOffset;

@end
