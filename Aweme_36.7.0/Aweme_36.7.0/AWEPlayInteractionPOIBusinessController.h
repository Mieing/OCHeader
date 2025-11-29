@class AWEPlayInteractionAnchorViewModel, NSString;
@protocol AWEPlayInteractionPOIBusinessCardProtocol;

@interface AWEPlayInteractionPOIBusinessController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol, AWEPlayInteractionPOIBusinessCardDelegate, AWEPlayInteractionPOIBusinessInnerDelegate>

@property (retain, nonatomic) AWEPlayInteractionAnchorViewModel *anchorViewModel;
@property (nonatomic) BOOL isHide;
@property (retain, nonatomic) id<AWEPlayInteractionPOIBusinessCardProtocol> poiBusinessCardManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)resumeCardAnimation;
- (void)cancelCardAnimation;
- (void)setPOIBusinessManagerModel:(id)a0;
- (BOOL)poiBusinessCardIsShowing;
- (id)localLifeAnchorManager;
- (id)exposedCommonCommerceDelegate;
- (void)p_showPOIBusinessCardWithMediaPlayedSeconds:(double)a0 videoDuration:(double)a1 loopTimes:(long long)a2;
- (void)poiBusinessCardViewAppearing;
- (void)poiBusinessCardViewDisappearing;
- (id)poiBusinessCardViewDisplay;
- (void)poiBusinessCardViewOpenDetail;
- (void)poiBusinessCardDataLoadSuccess;
- (void)poiBusinessCardBeginShowCard;
- (void)poiBusinessCardShowCardEndding;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
