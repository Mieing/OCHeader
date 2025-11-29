@class NSString, AWELiveShareBottomCardModel, AWELiveRoomModel, NSMutableArray;
@protocol AWELiveStreamShareDelegate;

@interface AWELiveRevenuePreStreamController : NSObject <IESLiveRevenueInteractAction>

@property (retain, nonatomic) NSMutableArray *businessElements;
@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (retain, nonatomic) AWELiveShareBottomCardModel *wishListCardModel;
@property (retain, nonatomic) AWELiveShareBottomCardModel *pkCardModel;
@property (weak, nonatomic) id<AWELiveStreamShareDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)notifyRevenueInteractShowExtendContent:(BOOL)a0 isPunish:(BOOL)a1 timeRemain:(id)a2 description:(id)a3;
- (void)receiveChannelMessage:(id)a0;
- (BOOL)isPKOrMultilinkerScene;
- (void)setupLiveRoomModel:(id)a0 preStreamContainer:(id)a1 previewStreamScene:(long long)a2;
- (void)createElement;
- (void)parseWishListModelWith:(id)a0;
- (void)streamPlayerStartToPlay;
- (void)streamPlayerStop;
- (void)updateBottomCardModel;
- (BOOL)needAutoOpenPanel;
- (id)pkEnterRoomParams;
- (void)updateStreamPlayerPlaybackState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
