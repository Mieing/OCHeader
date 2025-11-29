@interface AWEKnowledgeRichContentImpl.FullPageFeedBottomMenuItemViewModel : AWEKnowledgeRichContentImpl.FullPageFeedBaseItemViewModel {
    void /* unknown type, empty encoding */ $__lazy_storage_$_itemsMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bindingsArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enterFrom;
    void /* unknown type, empty encoding */ isViewDisabled;
    void /* unknown type, empty encoding */ iconSize;
    void /* unknown type, empty encoding */ playInteractor;
}

@property (nonatomic, readonly) double itemHeight;

- (void)commentCountDidAddWithNotification:(id)a0;
- (void)commentCountDidDeleteWithNotification:(id)a0;
- (void)commentCountDidChangeWithNotification:(id)a0;
- (void)configWithSectionContext:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
