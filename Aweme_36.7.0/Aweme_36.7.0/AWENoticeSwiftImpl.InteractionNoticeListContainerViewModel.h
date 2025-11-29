@interface AWENoticeSwiftImpl.InteractionNoticeListContainerViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ currentTabItemModel;
    void /* unknown type, empty encoding */ isSubTabList;
    void /* unknown type, empty encoding */ _canShowGroupAuditEmptyPage;
    void /* unknown type, empty encoding */ noticeEmptyInfo;
    void /* unknown type, empty encoding */ didClickCreateGroupButton;
    void /* unknown type, empty encoding */ _isRefreshingList;
    void /* unknown type, empty encoding */ _isLoadingMore;
    void /* unknown type, empty encoding */ _showLoadingView;
    void /* unknown type, empty encoding */ _hideLoadMoreFooter;
    void /* unknown type, empty encoding */ listStateObservable;
    void /* unknown type, empty encoding */ refreshingObservable;
    void /* unknown type, empty encoding */ loadingMoreObservable;
    void /* unknown type, empty encoding */ loadingViewObservable;
    void /* unknown type, empty encoding */ hideRefreshHeaderObservable;
    void /* unknown type, empty encoding */ hideLoadMoreFooterObservable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptySectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listEmptySectionViewModel;
}

@property (nonatomic) BOOL hideRefreshHeader;

- (void)setupViewModel;
- (void).cxx_destruct;
- (id)init;

@end
