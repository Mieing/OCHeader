@interface AWENoticeSwiftImpl.InteractionNoticeListSectionViewModel : AWEBaseListSectionViewModel {
    void /* unknown type, empty encoding */ listType;
    void /* unknown type, empty encoding */ noticeGroupNumber;
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ userRecommendFilteredUserIds;
    void /* unknown type, empty encoding */ vcdToastText;
    void /* unknown type, empty encoding */ hasMoreNotice;
    void /* unknown type, empty encoding */ enumerateCurrentListCellViewModelsBlock;
    void /* unknown type, empty encoding */ enumerateAllListCellViewModelsBlock;
    void /* unknown type, empty encoding */ deleteNoticeBlock;
    void /* unknown type, empty encoding */ tryUnfoldNoticeBlock;
    void /* unknown type, empty encoding */ updateSelectedTabItemListStateBlock;
    void /* unknown type, empty encoding */ subItemTraceParam;
    void /* unknown type, empty encoding */ _showUnfoldViewLoading;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listFoldManager;
    void /* unknown type, empty encoding */ _isMultiSelectStatus;
    void /* unknown type, empty encoding */ _checkCount;
    void /* unknown type, empty encoding */ _canSelectCount;
    void /* unknown type, empty encoding */ allGroupAuditCellViewModels;
    void /* unknown type, empty encoding */ orderedSelectedCellViewModelIds;
    void /* unknown type, empty encoding */ hasShownCellViewModelIds;
    void /* unknown type, empty encoding */ _hasRemoveAllComponent;
}

@property (nonatomic) BOOL hideUnfoldView;

+ (BOOL)useCellViewModel;

- (void)groupAuditDidProcessedWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
