@interface AWENoticeSwiftImpl.InteractionNoticeGroupAuditCellController : AWEBaseListCellController <NSObject> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ capturedCurrentCell;
    void /* unknown type, empty encoding */ cellUnreadStatusObservable;
    void /* unknown type, empty encoding */ cfColorRingDisplayTransitionTargetView;
    void /* unknown type, empty encoding */ cfColorRingDisplayAvatarView;
    void /* unknown type, empty encoding */ cfColorRingViewContainerView;
    void /* unknown type, empty encoding */ story25ColorRingDisplayAvatarView;
    void /* unknown type, empty encoding */ story25ColorRingViewContainerView;
    void /* unknown type, empty encoding */ story25ColorRingView;
}

- (void)didBindCellViewModel;
- (struct CGSize { double x0; double x1; })sizeForItemWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void)didSelectItem;

@end
