@class NSString, AWEUserRecommendBigCardViewModel, AWEUserRecommendBigCardContainerView, AWEAwemeModel, AWEAwemePageContext;
@protocol AFDSpecialCardPanelTrackDelegate, AWEPlayInteractionViewControllerProtocol;

@interface AWEFeedUserRecommendListViewController : UIViewController <AWEUserRecommendBigCardContainerViewDelegate, AWEFeedUserRecommendListViewControllerProtocol, AFDSpecialCardPanelProtocol> {
    AWEAwemeModel *model;
    AWEAwemePageContext *outerPageContext;
    NSString *referString;
    id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;
}

@property (retain, nonatomic) AWEUserRecommendBigCardViewModel *viewModel;
@property (retain, nonatomic) AWEUserRecommendBigCardContainerView *bigCardContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFDSpecialCardPanelTrackDelegate> trackDelegate;

- (id)referString;
- (void)setReferString:(id)a0;
- (id)outerPageContext;
- (void)setOuterPageContext:(id)a0;
- (void)videoWillPlay;
- (void)videoWillPause;
- (BOOL)p_isVCVisibleAndHasMusic;
- (void)p_handleEnterPrivacySetting;
- (void)p_handleExitPrivacySetting;
- (void)p_didEnterBackground;
- (void)p_willEnterForeground;
- (void)willShowLongPressPanelOnBigCard:(id)a0;
- (void)willDismissLongPressPanelOnBigCard:(id)a0;
- (void)didClickBigCard:(id)a0 enterMethod:(id)a1;
- (void)didDislikeBigCard:(id)a0 enterMethod:(id)a1;
- (id)model;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)setInteractionDelegate:(id)a0;
- (id)interactionDelegate;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end
