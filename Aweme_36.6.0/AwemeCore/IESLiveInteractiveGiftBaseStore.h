@class IESLiveInteractiveGiftPanelView, NSMutableDictionary, NSString, HTSEventContext, IESLiveCombineSubject, NSMutableArray;
@protocol IESLiveInteractiveGiftAPI;

@interface IESLiveInteractiveGiftBaseStore : NSObject <IESLiveInteractiveGiftVMDelegate>

@property (retain, nonatomic) id<IESLiveInteractiveGiftAPI> giftAPI;
@property (nonatomic) long long alreadyRequestPage;
@property (nonatomic) long long banRequestFetchOnOpenPanel;
@property (retain, nonatomic) IESLiveCombineSubject *giftListFetchedCombineSubject;
@property (retain, nonatomic) IESLiveCombineSubject *giftListChangedCombineSubject;
@property (retain, nonatomic) NSMutableDictionary *giftPoolDic;
@property (nonatomic) long long countPerRequest;
@property (nonatomic) long long currentSelectGiftId;
@property (weak, nonatomic) IESLiveInteractiveGiftPanelView *panelView;
@property (retain, nonatomic) NSString *clickFrom;
@property (retain, nonatomic) NSMutableArray *pinGiftIds;
@property (retain, nonatomic) NSMutableArray *dislikeGiftIds;
@property (retain, nonatomic) NSMutableArray *audienceAbleGiftIds;
@property (retain, nonatomic) NSMutableArray *audienceAbleGifts;
@property (retain, nonatomic) NSMutableArray *poolGifts;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isInGiftLibraryViewSide;
@property (nonatomic) BOOL banRequestGiftList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)baseTrackParams;
- (void)componentDidMount;
- (BOOL)isInLive;
- (void)showGiftPanelWithExtra:(id)a0;
- (void)fetchGiftListForce:(BOOL)a0 ignorePoolData:(BOOL)a1;
- (void)closeGiftPanelForce;
- (void)selectGiftWithId:(long long)a0;
- (void)pinModeChange;
- (void)requestChangePinGiftIds:(id)a0 dislikeGiftIds:(id)a1 completion:(id /* block */)a2;
- (void)currentViewNeedSlide;
- (void)trackGiftLibraryExistViewShow;
- (void)trackAudienceAbleViewShow;
- (void)changeGiftListWithPinIds:(id)a0 dislikeGiftIds:(id)a1 completion:(id /* block */)a2;
- (long long)currentFetchScene;
- (void)requestGiftsInPool;
- (void)requestAddWithGiftId:(id)a0 completion:(id /* block */)a1;
- (void)requestDeleteWithGiftId:(id)a0 completion:(id /* block */)a1;
- (void)requestRefreshPool;
- (void).cxx_destruct;

@end
