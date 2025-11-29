@class NSString, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformAnchorRevenueService : NSObject <IESLiveGameOpenPlatformAnchorRevenueServiceInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableDictionary *serviceItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopApp:(id)a0;
- (void)stopAllApps;
- (void)startApp:(id)a0;
- (void)appDidFinishLoadingContainer:(id)a0;
- (BOOL)isAppRunning:(id)a0;
- (void)showConsumptionRankListForApp:(id)a0 panelHeight:(double)a1 willShowBlock:(id /* block */)a2 didHideBlock:(id /* block */)a3;
- (void)showRevenueNoticeViewForApp:(id)a0 addToContainerBlock:(id /* block */)a1 onClickBlock:(id /* block */)a2;
- (void)updateRevenueNoticeViewForApp:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)fetchLatestRevenueNoticeForApp:(id)a0;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void).cxx_destruct;

@end
