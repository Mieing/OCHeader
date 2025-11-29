@class NSString, NSTimer, UIScrollView, IESLiveBannerListModel;
@protocol IESLiveRoomService, IESLiveUserService;

@interface IESLiveActivityBannerNativeContainer : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) IESLiveBannerListModel *bannerData;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (nonatomic) int preIndex;
@property (nonatomic) BOOL timerOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (void)addGesture;
- (BOOL)isInMSeq;
- (void)initTimer;
- (void)autoScrollPage;
- (void)trackBanner:(id)a0 index:(int)a1 withClicked:(BOOL)a2;
- (void)containerViewTapped;
- (id)initWithBannerData:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)dealloc;

@end
