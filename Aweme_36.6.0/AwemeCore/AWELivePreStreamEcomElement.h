@class NSString, IESLiveRoomMQEventReportApi;

@interface AWELivePreStreamEcomElement : AWELiveBusinessBaseElement <AWELivePreStreamBusinessCoreDataProtocol, AWELivePreStreamMessageSubscriber>

@property (retain, nonatomic) IESLiveRoomMQEventReportApi *reportApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (id)provideCoreDataForEvent:(long long)a0;
- (void)roomInfoBySceneReceive:(id)a0 extendArea:(id)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
