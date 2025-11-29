@class AWESearchArticleDetailPageContext;

@interface AWESearchArticleContainerViewModel : NSObject

@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;

- (void)trackFollow;
- (void)trackUnfollow;
- (void)bindPageContext:(id)a0;
- (void)trackEndMultiPhotoConsume;
- (void)routeToUserProfileWith:(unsigned long long)a0;
- (id)urlForUserProfileWithMethod:(unsigned long long)a0;
- (void)trackEnterPersonalDetailWith:(unsigned long long)a0;
- (id)enterMethodWith:(unsigned long long)a0;
- (void).cxx_destruct;

@end
