@class NSString, NSMutableArray, WAMainListNearByLocationLogic;

@interface WAMainListMenuLogic : NSObject <PBMessageObserverDelegate, WAMainListNearByLocationLogicDelegate>

@property (retain, nonatomic) NSMutableArray *entranceInfoList;
@property (retain, nonatomic) WAMainListNearByLocationLogic *locationLogic;
@property (copy, nonatomic) id /* block */ menuInfoRespAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)requestMainListMenuInfoWithCompleteAction:(id /* block */)a0;
- (void)requestWithLocation:(id)a0;
- (id)entranceInfoById:(int)a0;
- (void)onGetLocationSuccess:(id)a0;
- (void)onGetLocationFailedWithReason:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)updateEntranceInfoCache:(id)a0;
- (id)entranceInfoCache;
- (void).cxx_destruct;

@end
