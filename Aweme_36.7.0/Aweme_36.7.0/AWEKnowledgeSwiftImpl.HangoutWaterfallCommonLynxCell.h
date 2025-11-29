@interface AWEKnowledgeSwiftImpl.HangoutWaterfallCommonLynxCell : UICollectionViewCell <HunterContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ cardAppearStateChangeEventName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_failIconView;
    void /* unknown type, empty encoding */ hunterView;
    void /* unknown type, empty encoding */ retryTime;
    void /* unknown type, empty encoding */ schema;
    void /* unknown type, empty encoding */ serverData;
    void /* unknown type, empty encoding */ clientData;
    void /* unknown type, empty encoding */ preserveDataManager;
    void /* unknown type, empty encoding */ cardShowEventName;
    void /* unknown type, empty encoding */ removeCardEventName;
    void /* unknown type, empty encoding */ cardStatusChangeEventName;
    void /* unknown type, empty encoding */ autoRetryTime;
    void /* unknown type, empty encoding */ removeCardBlock;
    void /* unknown type, empty encoding */ cardStatusChangeBlock;
    void /* unknown type, empty encoding */ onLynxViewDidConstructJSRuntime;
    void /* unknown type, empty encoding */ onCellHeightDidUpdate;
}

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)awe_themeDidChange:(long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
