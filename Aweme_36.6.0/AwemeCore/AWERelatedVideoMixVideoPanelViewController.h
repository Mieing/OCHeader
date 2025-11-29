@class UIView, NSString, NSDictionary, AWEListDataController, AWECollectionButton, UIButton, AWEMixVideoModel, MASConstraint, UIPanGestureRecognizer, AWERelatedVideoMixVideoPanelListView, NSNumber, AWERelatedVideoMixVideoHeadView;
@protocol AWEMixVideoPanelViewDelegate, AWEMixVideoCollectionButtonViewProtocol, AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWERelatedVideoMixVideoPanelViewController : UIViewController <UIGestureRecognizerDelegate, AWEMixVideoPanelListViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *shareBtn;
@property (retain, nonatomic) UIView *bottomCollectView;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideo;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (retain, nonatomic) AWERelatedVideoMixVideoHeadView *headView;
@property (retain, nonatomic) MASConstraint *headViewHeightContraint;
@property (nonatomic) BOOL panInXPosition;
@property (retain, nonatomic) AWECollectionButton<AWEMixVideoCollectionButtonViewProtocol> *collectBtn;
@property (retain, nonatomic) AWERelatedVideoMixVideoPanelListView *listView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSNumber *fromOrder;
@property (nonatomic) BOOL forceFirstPosition;
@property (weak, nonatomic) id<AWEMixVideoPanelViewDelegate> delegate;
@property (nonatomic) BOOL useExternalDataSource;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) double panelHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfPanned:(id)a0;
- (double)mixBtnHeight;
- (void)refreshCollectBtn;
- (void)addShareBtnIfNeed;
- (void)showCollect;
- (void)setSelectedRefreshEnable:(BOOL)a0;
- (void)handleShareClick;
- (BOOL)isNeedToHideCollectButton:(id)a0;
- (void)updateToMixPanelButtonStyleWith:(id)a0;
- (void)requestMixVideoListWithNoData:(BOOL)a0 listArray:(id)a1;
- (void)loadMoreMixVideoListWithNoData:(BOOL)a0 listArray:(id)a1;
- (void)mixVideoPanelListDidSelectAtIndex:(long long)a0 aweme:(id)a1;
- (void)refreshModel:(id)a0 currentAwemeModel:(id)a1 datacontroller:(id)a2;
- (void)handleCloseButtonAccessibilityAnnouncementIfNeed;
- (double)mixTitleHeight;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)loadView;
- (void)closeButtonTapped;

@end
