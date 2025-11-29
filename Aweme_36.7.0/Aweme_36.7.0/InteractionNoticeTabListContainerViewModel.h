@interface InteractionNoticeTabListContainerViewModel : AWEBaseTabListViewModel {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listTypeToDataProcessorMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listTypeToDataProcessorMapByGroupID;
    void /* unknown type, empty encoding */ refreshListGroup;
    void /* unknown type, empty encoding */ eventDelegate;
    void /* unknown type, empty encoding */ getIsNoticeFullListBlock;
    void /* unknown type, empty encoding */ getCurrentSelectedListViewModel;
    void /* unknown type, empty encoding */ markRequestDidBegin;
    void /* unknown type, empty encoding */ markRequestDidEnd;
    void /* unknown type, empty encoding */ tabListTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listTypeToTabItemModelMap;
    void /* unknown type, empty encoding */ selectedTabItemModel;
    void /* unknown type, empty encoding */ _showDisturbingTipView;
    void /* unknown type, empty encoding */ _showNoisyCommentTipView;
    void /* unknown type, empty encoding */ showSafetyTipsView;
    void /* unknown type, empty encoding */ shouldShowSafetyTipsView;
    void /* unknown type, empty encoding */ hasMarkedContactTipsShow;
    void /* unknown type, empty encoding */ _showContactRemarkTipView;
    void /* unknown type, empty encoding */ _showNavigationLoadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_unreadCountManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userRecommendManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disturbingTipsManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newMessageManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_noisyCommentTipsManager;
    void /* unknown type, empty encoding */ isForMergedContainer;
}

- (void)setupViewModel;
- (void).cxx_destruct;
- (id)init;

@end
