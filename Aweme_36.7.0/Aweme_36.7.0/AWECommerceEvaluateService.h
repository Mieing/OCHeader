@class NSString, UIViewController, AWECommerceCommentModel;
@protocol AWEAdEvaluateContainerViewController;

@interface AWECommerceEvaluateService : HTSService <AWECommerceEvaluateService>

@property (weak, nonatomic) UIViewController<AWEAdEvaluateContainerViewController> *commentViewController;
@property (retain, nonatomic) AWECommerceCommentModel *commentModel;
@property (nonatomic) long long appraisalNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commentCountWithAwemeModel:(id)a0;
- (id)commentTabTitleWithAwemeModel:(id)a0;
- (void)updateCommentCountWithAwemeModel:(id)a0 newCount:(id)a1;
- (void)commentTabChangedWithAwemeModel:(id)a0 isAdTab:(BOOL)a1;
- (void)trackCommentTabShowIfNeed:(id)a0;
- (void)trackCommentTabStayTimeIfNeed:(id)a0;
- (id)extraParamsWithAwemeModel:(id)a0;
- (BOOL)shouldShowEvaluateWithAwemeModel:(id)a0;
- (BOOL)enableCommentNewVision;
- (id)commentViewControllerWithAwemeModel:(id)a0;
- (void)trackCommentTabClick:(id)a0;
- (id)extraStayParamsWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
