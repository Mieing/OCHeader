@class NSTimer, NSString, UITapGestureRecognizer, AWEECFeedGoodsCardContainerView, UIButton, AWEGradientView, YYLabel, UICollectionView, UIImageView, AWEECFeedGoodsCardModel, NSMutableArray;
@protocol AWEECFeedGoodsCardViewControllerDelegate;

@interface AWEECFeedGoodsCardViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEECFeedGoodsCardContainerViewDelegate, AWEECFeedGoodsCardViewControllerProtocol>

@property (retain, nonatomic) AWEECFeedGoodsCardModel *model;
@property (retain, nonatomic) AWEGradientView *topGradientview;
@property (retain, nonatomic) UICollectionView *largeImageCollectionView;
@property (retain, nonatomic) AWEECFeedGoodsCardContainerView *cardContainerView;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *goMallButton;
@property (retain, nonatomic) YYLabel *slideTipsLabel;
@property (nonatomic) BOOL isSmallPhone;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long productCount;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) long long progressTimerRepeatCount;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) double imageTopOffset;
@property (nonatomic) long long currentProgressIndex;
@property (retain, nonatomic) NSMutableArray *timeList;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (nonatomic) BOOL playStatus;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double enterTime;
@property (nonatomic) long long lastValue;
@property (weak, nonatomic) id<AWEECFeedGoodsCardViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *bgmUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCommonParams;
- (void)setupUIWithModel:(id)a0;
- (void)__handleTapGesture:(id)a0;
- (void)clickTitleViewWithUrl:(id)a0;
- (void)clickCellWithUrl:(id)a0 productId:(id)a1;
- (void)removeTimer;
- (void)scrollCollectionView;
- (void)updateViewWithprogressValue:(double)a0 totalValue:(double)a1;
- (void)updateViewWithPlayTime:(double)a0;
- (void)setTimerAndPlayWithNeedReset:(BOOL)a0;
- (void)requesetManageProductCardWithManageType:(long long)a0;
- (void)trackWithParams:(id)a0 eventName:(id)a1;
- (void)onDislikeButtonClicked:(id)a0;
- (void)onMallButtonClicked:(id)a0;
- (id)getNewUrlWithURL:(id)a0 productId:(id)a1 source_method:(id)a2;
- (id)getIdGroupStr;
- (id)getIndexWithProductId:(id)a0;
- (void)timerFired:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)pause;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)dealloc;
- (void)willDisappear;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)willDisplay;

@end
