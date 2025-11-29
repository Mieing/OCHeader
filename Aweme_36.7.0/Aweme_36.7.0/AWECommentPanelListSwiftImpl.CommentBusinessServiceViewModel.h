@class NSArray;

@interface AWECommentPanelListSwiftImpl.CommentBusinessServiceViewModel : NSObject <AWECommentInputViewManagerDelegate, AWECommentListBusinessServiceViewModelProtocol> {
    void /* function */ insertIDs;
    void /* function */ insertCommentIDs;
    void /* unknown type, empty encoding */ list;
    void /* unknown type, empty encoding */ businessExtraParams;
    void /* unknown type, empty encoding */ cellViewModelMap;
    void /* unknown type, empty encoding */ didObserve;
    void /* unknown type, empty encoding */ removeGuidanceModel;
    void /* unknown type, empty encoding */ originOffsetY;
    void /* unknown type, empty encoding */ selectIndexPath;
    void /* unknown type, empty encoding */ skipScrollToOriginPlace;
    void /* unknown type, empty encoding */ fakeComment;
    void /* unknown type, empty encoding */ itemsMap;
    void /* unknown type, empty encoding */ preparedSections;
    void /* unknown type, empty encoding */ contextDelegate;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ pageID;
    void /* unknown type, empty encoding */ inputCacheManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentInputViewManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentInputContext;
}

@property (nonatomic, copy) NSArray *insertIDs;
@property (nonatomic, copy) NSArray *insertCommentIDs;
@property (nonatomic) long long serviceID;

- (BOOL)custom_commentInputViewShouldReturn:(id)a0;
- (void)configContext:(id)a0;
- (void)changeServiceContainerPage:(id)a0;
- (void)footerDidEndDisplayForIdentifier:(id)a0 atIndexPath:(id)a1;
- (void)footerWillDisplayForIdentifier:(id)a0 atIndexPath:(id)a1;
- (void)reusableViewDidEndDisplayForIdentifier:(id)a0 atIndexPath:(id)a1;
- (void)reusableViewWillDisplayForIdentifier:(id)a0 atIndexPath:(id)a1;
- (id)identifierForFooterAtIndexPath:(long long)a0;
- (void)configTFooter:(id)a0 identifier:(id)a1 atIndexPath:(id)a2;
- (double)footerHeightForIdentifier:(id)a0 section:(long long)a1;
- (double)heightForRowForIdentifier:(id)a0 atIndexPath:(id)a1;
- (id)identifierForResuableViewAtIndexPath:(id)a0;
- (void)configTCell:(id)a0 identifier:(id)a1 atIndexPath:(id)a2;
- (long long)numberOfItemsForSection:(long long)a0;
- (void)registerReusableView:(id)a0 contextDelegate:(id)a1 completionBlock:(id /* block */)a2;
- (void)commentUIThemeChange;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectRowAtIndexPath:(id)a0;

@end
