@class LOTAnimationView, AWEFeedNearbyMallCardScrollTipsGreyView, AWEFeedNearbyMallCardStyle2HeaderView, UILabel, AWEFeedNearbyMallCardUIConfig, NSMutableArray, UIView, NSString, AWEAwemeModel, AWEFeedPOIMallCardModel, AWENearbyFeedbackSheet, AWEGradientView, UIImageView;
@protocol AWEPOIDynamicCardProtocol;

@interface AWEFeedNearbyMallCardStyle2ViewController : UIViewController <AWENearbyFeedbackSheetDelegate, AWEFeedNearbyMallCardProtocol>

@property (retain, nonatomic) AWEFeedPOIMallCardModel *poiMallCard;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) BOOL isDisplaying;
@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) LOTAnimationView *bgLottieView;
@property (retain, nonatomic) LOTAnimationView *locationLottieView;
@property (retain, nonatomic) UIImageView *locationImgView;
@property (retain, nonatomic) UIImageView *contentBackgroundView;
@property (retain, nonatomic) UIImageView *contentTipsIcon;
@property (retain, nonatomic) UIImageView *contextTipsTextImageView;
@property (retain, nonatomic) UIView *cardContentView;
@property (retain, nonatomic) AWEFeedNearbyMallCardStyle2HeaderView *headerView;
@property (retain, nonatomic) UIView *itemListView;
@property (retain, nonatomic) NSMutableArray *itemViewsArr;
@property (retain, nonatomic) NSMutableArray *style3ItemViewsArr;
@property (retain, nonatomic) UIView *moreView;
@property (retain, nonatomic) UILabel *moreTitlelabel;
@property (retain, nonatomic) UIImageView *moreLabelArrowIcon;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) AWEFeedNearbyMallCardScrollTipsGreyView *scrollTipsView;
@property (retain, nonatomic) AWENearbyFeedbackSheet *feedbackSheet;
@property (nonatomic) double contentBgTopPadding;
@property (nonatomic) double topSpace;
@property (nonatomic) double headerViewTopMargin;
@property (nonatomic) double headerViewHeight;
@property (retain, nonatomic) UIView<AWEPOIDynamicCardProtocol> *dCardBG;
@property (nonatomic) BOOL hadReportTracking;
@property (retain, nonatomic) AWEFeedNearbyMallCardUIConfig *UIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (BOOL)isGeckoResourceReady;
- (void)didEndDisplay;
- (void)__addAction;
- (void)renderModel:(id)a0 extrParams:(id)a1;
- (void)__setupObserver;
- (void)loadCDN;
- (void)__jumpToEntry:(id)a0 extraParams:(id)a1;
- (void)__trackMallEvent:(id)a0 params:(id)a1;
- (id)__configItemViewWithModel:(id)a0 index:(unsigned long long)a1;
- (id)__configStyle3ItemViewWithModel:(id)a0 index:(unsigned long long)a1;
- (id)__descStrWithDescType:(unsigned long long)a0;
- (void)__showDialog:(id)a0;
- (id)__formatURLString:(id)a0;
- (void)__setupViews;
- (void)__setInitState;
- (void)handleFeedbackDislikeWithType:(long long)a0 toast:(id)a1;
- (void)postDeleteMallCardAwemeNotification;
- (id)__contentBackgroundImage;
- (id)resizableLocalImage;
- (void)loadImageURL:(id)a0 completion:(id /* block */)a1;
- (void)feedbackSheet:(id)a0 didClickItem:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)__backgroundImage;
- (void)willDisplay;

@end
