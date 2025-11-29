@class AWEDetailManager;

@interface AWEPlayInteractionMusicInfoElementViewModel : AWEPlayInteractionBaseElementViewModel

@property (retain, nonatomic) AWEDetailManager *detailManager;

- (void)interactor_onMusicInfoLabelClicked:(id)a0 trackerDict:(id)a1;
- (void)router_enterMusicDetailWithRouterDict:(id)a0;
- (void)enterMusicDetailWithTrackerDict:(id)a0;
- (void)enterDuetSingRecordingPage;
- (void)shootSameStyleMusicFormFollowShootAnchor;
- (void)onMusicInfoViewClicked_IMP:(id)a0;
- (id)routerMusicDetailImplWithCommonConfig;
- (id)commonRepostParamsOnMusicInfoLabelClickedWith:(id)a0;
- (void)trackAdEvent:(id)a0;
- (void)router_enterMusicDetailWithRouterDict:(id)a0 musicModel:(id)a1 enterSimilarDetailPage:(BOOL)a2;
- (void).cxx_destruct;

@end
