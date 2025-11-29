@class NSString;

@interface AWEIMEmoticonImagePrefetchComponent : AWEIMComponentBase <AWEIMEmoticonPanelEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)panelWillDisplayPageAt:(id)a0;
- (void)pageDataDidReloaded:(id)a0;
- (void)p_prefetchNeighbourTabImagesIfNeeded:(long long)a0;
- (void)p_prefetchPageData:(id)a0;
- (void)p_prefetchImages:(id)a0;
- (void)p_prefetchImages:(id)a0 maxCount:(long long)a1;

@end
