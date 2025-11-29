@class UIView, AWENearbyFeedbackSheet, AWEFeedPOIMallCardModel, AWEAwemeModel, NSString, AWEFeedNearbyMallCardScrollTipsView, UIImageView, AWEGradientView, NSMutableArray, LOTAnimationView, AWEFeedNearbyMallCardMoreView, AWEFeedNearbyMallCardHeaderView;

@interface AWEFeedNearbyMallCardViewController : UIViewController <AWENearbyFeedbackSheetDelegate, AWEFeedNearbyMallCardProtocol>

@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *backgroundImagView;
@property (retain, nonatomic) LOTAnimationView *locationLottieView;
@property (retain, nonatomic) UIView *cardContentView;
@property (retain, nonatomic) AWEFeedNearbyMallCardHeaderView *headerView;
@property (retain, nonatomic) LOTAnimationView *itemContainerLottieView;
@property (retain, nonatomic) AWEGradientView *gradientView1;
@property (retain, nonatomic) AWEGradientView *gradientView2;
@property (retain, nonatomic) UIImageView *lightImageView;
@property (retain, nonatomic) UIView *itemContainerView;
@property (retain, nonatomic) UIView *itemListView;
@property (retain, nonatomic) AWEFeedNearbyMallCardMoreView *moreView;
@property (retain, nonatomic) AWEFeedNearbyMallCardScrollTipsView *scrollTipsView;
@property (retain, nonatomic) AWENearbyFeedbackSheet *feedbackSheet;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) AWEFeedPOIMallCardModel *poiMallCard;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerViewOriginFrame;
@property (retain, nonatomic) NSMutableArray *itemOriginFrameArray;
@property (nonatomic) BOOL didDispaly;
@property (nonatomic) BOOL hadReportTracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (void)didEndDisplay;
- (void)__buildUI;
- (void)__layoutUI;
- (void)__addAction;
- (void)renderModel:(id)a0 extrParams:(id)a1;
- (void)__setupObserver;
- (void)__jumpToEntry:(id)a0 extraParams:(id)a1;
- (id)__descStrWithDescType:(unsigned long long)a0;
- (void)__showDialog:(id)a0;
- (id)__formatURLString:(id)a0;
- (void)handleFeedbackDislikeWithType:(long long)a0 toast:(id)a1;
- (void)postDeleteMallCardAwemeNotification;
- (void)feedbackSheet:(id)a0 didClickItem:(id)a1 atIndex:(long long)a2;
- (void)__renderItemView:(id)a0 itemModel:(id)a1;
- (void)trackMallEvent:(id)a0 params:(id)a1;
- (void)__animateWithDuration:(double)a0 timingFunction:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)willDisplay;

@end
