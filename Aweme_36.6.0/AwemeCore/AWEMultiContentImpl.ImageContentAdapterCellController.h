@interface AWEMultiContentImpl.ImageContentAdapterCellController : BDMultiContentContainer.ImageContentCellController {
    void /* unknown type, empty encoding */ currentImageCell;
    void /* unknown type, empty encoding */ isFirstImage;
    void /* unknown type, empty encoding */ fistImageStamp;
    void /* unknown type, empty encoding */ firstClipPreloaded;
    void /* unknown type, empty encoding */ firstClipUseLocalCache;
}

- (void)zoomScrollViewWillBeginZooming;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void)didEndDisplayingCell:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
