@class NSString, AWEIMAlbumSlidingTabView;

@interface AWEIMPickerSlideTabComponent : AWEIMComponentBase <AWEIMPickerSlideTabInterface, AWEIMAlbumSlidingTabViewDelegate, AWEIMAssetListComponentAction>

@property (retain, nonatomic) AWEIMAlbumSlidingTabView *slideTabView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)slidingTabView:(id)a0 didSelectIndex:(long long)a1;
- (double)slideTabHeight;
- (void)categoryScrollViewDidScroll:(id)a0;
- (void)categoryScrollViewDidEndDecelerating:(id)a0;
- (void)updateSlideTabViewAccessibilityWithSelectIndex:(long long)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)createUI;

@end
