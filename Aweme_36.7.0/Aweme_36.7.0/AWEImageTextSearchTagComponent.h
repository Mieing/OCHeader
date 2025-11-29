@interface AWEImageTextSearchTagComponent : AWEImageTextBaseComponent <AWEImageTextVideoControllerDelegate, AWEImageTextLifeCycleProtocol, AWEMultiContentImpl.ImageTextSearchTagComponentProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagManager;
}

- (void)pauseByClick:(BOOL)a0;
- (void)didBindSectionViewModel;
- (void)updateInnerSlidableIndex:(long long)a0 newIndex:(long long)a1;
- (id)registerProtocol;
- (void)fetchSearchTagsRequestWith:(id)a0;
- (void)fetchSearchTagsRequestAutoPost;
- (void).cxx_destruct;
- (id)init;
- (id)initWithManager:(id)a0;

@end
