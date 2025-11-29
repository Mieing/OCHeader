@interface AWECommentPanelListSwiftImpl.CommentViewModel : AWECommentSwiftImpl.AWECommentBaseListViewModel <AWEUserMessage, NSObject> {
    void /* unknown type, empty encoding */ containerViewModelDelegate;
    void /* unknown type, empty encoding */ deleteCommentListIndexPath;
    void /* unknown type, empty encoding */ didFinishLoadMore;
    void /* unknown type, empty encoding */ didFinishFirstLoading;
    void /* unknown type, empty encoding */ isListReloadedByRefresh;
    void /* unknown type, empty encoding */ adLinkType;
    void /* unknown type, empty encoding */ _linkCommentModel;
    void /* unknown type, empty encoding */ surveyTimer;
    void /* unknown type, empty encoding */ shouldShowSurveyTimer;
    void /* unknown type, empty encoding */ hasShownGuideTipsSection;
    void /* unknown type, empty encoding */ loginGuideSectionViewModel;
    void /* unknown type, empty encoding */ foldedModelsArray;
    void /* unknown type, empty encoding */ foldSectionViewModel;
    void /* unknown type, empty encoding */ waitChunkDataReady;
    void /* unknown type, empty encoding */ insertIDs;
    void /* unknown type, empty encoding */ _loadingStatusViewModel;
    void /* unknown type, empty encoding */ _observerProperty;
    void /* unknown type, empty encoding */ hasTrackTotalCountMismatch;
    void /* unknown type, empty encoding */ isHadLoadMore;
}

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didFinishBindPhone;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setDataFromNotiWithNoti:(id)a0;
- (void)setSliceDataFromNotiWithNoti:(id)a0;
- (void)setChunkDataFromNotiWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
