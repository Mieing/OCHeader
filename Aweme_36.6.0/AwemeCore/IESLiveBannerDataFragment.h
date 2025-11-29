@class NSString, NSHashTable, LiveRoomBannerPositionModel, NSError, IESLiveBannerApi;

@interface IESLiveBannerDataFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveBannerDataCenterProtocol>

@property (retain, nonatomic) NSHashTable *dataSubscribers;
@property (retain, nonatomic) IESLiveBannerApi *bannerAPI;
@property (retain, nonatomic) LiveRoomBannerPositionModel *bannerRspModel;
@property (retain, nonatomic) NSError *bannerRspError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)hideComponent;
- (void)showComponent;
- (void)FullLinkTrackEventWithName:(id)a0 params:(id)a1;
- (void)addBannerDataSubscriber:(id)a0;
- (void)fetchBannerDataWithPosition:(int)a0 isFirst:(BOOL)a1;
- (BOOL)subscribeBackEndDataWithContext:(int)a0;
- (void)realFetchBannerDataWithPosition:(int)a0 immediate:(BOOL)a1;
- (void)traceArriveTime:(BOOL)a0;
- (void)dealBannerPositionModel:(id)a0 error:(id)a1 positionType:(int)a2;
- (void)dispatchDataWithPosition:(int)a0;
- (void)reportEnterRoomBannerIDWithData:(id)a0;
- (void)dealWithBannerPositionModel:(id)a0 position:(id)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)messageReceived:(id)a0;

@end
