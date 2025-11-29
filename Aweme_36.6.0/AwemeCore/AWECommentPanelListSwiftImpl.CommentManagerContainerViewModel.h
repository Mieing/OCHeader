@interface AWECommentPanelListSwiftImpl.CommentManagerContainerViewModel : AWECommentSwiftImpl.AWECommentBaseListViewModel <AWEUserMessage> {
    void /* unknown type, empty encoding */ superPageContext;
    void /* unknown type, empty encoding */ existCommentIDs;
    void /* unknown type, empty encoding */ diggID;
    void /* unknown type, empty encoding */ isForOpinion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingStatusViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_observerProperty;
    void /* unknown type, empty encoding */ managerNumberSectionViewModel;
    void /* unknown type, empty encoding */ managerNumberSectionText;
    void /* unknown type, empty encoding */ opinionID;
    void /* unknown type, empty encoding */ opinionText;
    void /* unknown type, empty encoding */ allRelationSelectGroup;
    void /* unknown type, empty encoding */ allCommentSelectGroup;
    void /* unknown type, empty encoding */ allRelationSelectName;
    void /* unknown type, empty encoding */ allCommentSelectName;
    void /* unknown type, empty encoding */ allRelationSelectValue;
    void /* unknown type, empty encoding */ allCommentSelectValue;
    void /* unknown type, empty encoding */ currentCommentSelectOptions;
    void /* unknown type, empty encoding */ currentKeyword;
    void /* unknown type, empty encoding */ currentCommentSortType;
    void /* unknown type, empty encoding */ defaultCommentSortType;
}

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didFinishBindPhone;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)fetchListData;
- (void)loadMoreListData;
- (void).cxx_destruct;
- (id)init;

@end
