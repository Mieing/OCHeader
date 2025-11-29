@class NSString, AWEMVChannelPageContext, AWEAwemeModel, UIViewController;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEMVRouterService : NSObject <AWERelatedVideoDetailVideoViewControllerDelegate>

@property (nonatomic) BOOL isJumpingToDetailPage;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEMVChannelPageContext *context;
@property (weak, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *contentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zoomTransitionShrinkFinish;
- (void)prepareBackFromDetailPage;
- (void)ml_postBackToMVTabWithModel:(id)a0;
- (void)relatedVCWillQuitCurrentPlaybackTime:(id)a0 itemID:(id)a1 playState:(long long)a2;
- (void)enterRelatedVideoVCWithModel:(id)a0;
- (void)enterBannerLandPageWithModel:(id)a0;
- (void).cxx_destruct;

@end
