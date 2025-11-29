@class NSString, _TtC27AWEKnowledgeRichContentImpl30FullPageFeedAuthorRelationItem;

@interface AWEKnowledgeRichContentImpl.FullPageFeedAuthorItemViewModel : AWEKnowledgeRichContentImpl.FullPageFeedBaseItemViewModel <AWEUserMessage> {
    void /* unknown type, empty encoding */ isViewDisabled;
    void /* unknown type, empty encoding */ avatarURLs;
    void /* function */ username;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ author;
    void /* unknown type, empty encoding */ isFollowAnimating;
    void /* unknown type, empty encoding */ $__lazy_storage_$_anchorViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_unfollowItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relationContext;
}

@property (nonatomic) BOOL isNoAccountAd;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl30FullPageFeedAuthorRelationItem *relationItem;
@property (nonatomic, readonly) double itemHeight;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)configWithSectionContext:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
