@class IESECServiceProxy, NSString;
@protocol IESECShopDataService, IESECShopLayoutService;

@interface IESECShopLiveService : IESECShopService <IESECShopLiveService>

@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openLiveRoomSchema:(id)a0 btmID:(id)a1 host:(id)a2 bcmParams:(id)a3;
- (void)openLiveRoomSchema:(id)a0 btmID:(id)a1 host:(id)a2 bcmParams:(id)a3 extraLiveInfo:(id)a4;
- (void)trackLivesdkLiveShow:(id)a0 withBtmID:(id)a1 enterMethod:(id)a2;
- (void)trackLivesdkLiveClick:(id)a0 withBtmID:(id)a1 enterMethod:(id)a2;
- (id)queryWithExtraLiveInfo:(id)a0;
- (id)livesdkLiveEventParams:(id)a0 enterMethod:(id)a1;
- (id)ecomLiveParamsOnEnterLive:(id)a0;
- (id)ecomShareTrackExtraParams;
- (id)passThroughLogData:(id)a0;
- (void).cxx_destruct;

@end
