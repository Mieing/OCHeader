@class NSArray, CMCCommentScene;
@protocol AWEIronManModuleService;

@interface CMCCommentSceneController : CMCSceneController

@property (copy, nonatomic) NSArray *eCommerceTypes;
@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;
@property (weak, nonatomic) CMCCommentScene *scene;

- (long long)ironmanTypeForURL:(id)a0;
- (void)didClickUserWithContext:(id)a0;
- (void)didClickCellWithContext:(id)a0;
- (void)didClickCommentFeedbackWithContext:(id)a0;
- (void)trackLinkWithContext:(id)a0;
- (id)makeAdCommentWithContext:(id)a0;
- (void)didClickExtraInfoWithContext:(id)a0;
- (void)trackLinkWithContext:(id)a0 relatedComponentValue:(id)a1;
- (id)createBTMChainStringWithClickedView:(id)a0;
- (id)joinEnterpriseParamsIfNeeded:(id)a0 awemeModel:(id)a1 commentModel:(id)a2;
- (id)createBTMChainWithClickedView:(id)a0;
- (BOOL)shouldTrackClickForGeneralSearch:(id)a0 referString:(id)a1 didOpenAppStore:(BOOL)a2;
- (void)eCommerceTrackWithContext:(id)a0;
- (id)btmParamsWhenShow;
- (BOOL)shouldProcessIronManURLForLinkModel:(id)a0;
- (void)trackClickForGeneralSearchResultWithAweme:(id)a0 didOpenAppStore:(BOOL)a1;
- (void).cxx_destruct;
- (void)sceneDidLoad;

@end
