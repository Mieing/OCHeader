@interface AWEMultiContentImpl.BroadcastHandler : AWEMultiContentImpl.ContentHandler <AFDAlbumHandlerIndexable> {
    void /* unknown type, empty encoding */ hasTrackedShow;
    void /* unknown type, empty encoding */ proposedContentOffsetX;
    void /* unknown type, empty encoding */ updatedIndex;
    void /* unknown type, empty encoding */ previewConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$__dataController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fetchMaxCount;
}

@property (nonatomic, readonly) long long currentIndex;

- (void)scrollToIndex:(long long)a0 offset:(id)a1;
- (void).cxx_destruct;

@end
