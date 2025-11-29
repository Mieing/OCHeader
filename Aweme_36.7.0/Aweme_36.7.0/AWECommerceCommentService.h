@class NSString, UIViewController, UIView;
@protocol AWEAdFeedCommentContainerViewController, AWEAdCommentGuideView;

@interface AWECommerceCommentService : HTSService <AWECommentGuideDelegate, AWECommerceCommentService>

@property (weak, nonatomic) UIViewController<AWEAdFeedCommentContainerViewController> *commentViewController;
@property (weak, nonatomic) UIView<AWEAdCommentGuideView> *guideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeAdCommentGuide:(id)a0;
- (BOOL)shouldShowCommentWithAwemeModel:(id)a0;
- (void)trackCommentTabClick:(id)a0 enterMethod:(id)a1;
- (id)commentViewControllerWithAwemeModel:(id)a0 extraParams:(id)a1;
- (BOOL)isECommerceCommentWithAwemeModel:(id)a0;
- (id)commentCountWithAwemeModel:(id)a0;
- (id)commentTabTitleWithAwemeModel:(id)a0;
- (BOOL)shouldShowLandingCommentWithAwemeModel:(id)a0;
- (BOOL)shouldShowCommentRetainWithAwemeModel:(id)a0;
- (id)bottomGuideView;
- (void)updateCommentCountWithAwemeModel:(id)a0 newCount:(id)a1;
- (void)commentTabChangedWithAwemeModel:(id)a0 isAdTab:(BOOL)a1;
- (void)showCommentGuideViewIfNeedWithAwemeModel:(id)a0 containerView:(id)a1 currentSection:(long long)a2;
- (void)trackCommentTabShowIfNeed:(id)a0;
- (void)trackCommentTabStayTimeIfNeed:(id)a0;
- (id)extraParamsWithAwemeModel:(id)a0;
- (id)tabNameWithAwemeModel:(id)a0;
- (id)extraECommerceParamsWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
