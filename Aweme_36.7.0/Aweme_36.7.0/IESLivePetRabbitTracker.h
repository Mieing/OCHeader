@class HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveMonitor;

@interface IESLivePetRabbitTracker : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;

- (void)startPerfSampler;
- (void)stopPerfSampler;
- (id)initWith:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)trackWithEventName:(id)a0 trackInfo:(id)a1 errorCode:(unsigned long long)a2 errorMsg:(id)a3;
- (void)monitorOpenContainerWithScheme:(id)a0 petType:(long long)a1;
- (void)monitorOpenContainerResultWithScheme:(id)a0 petType:(long long)a1 error:(id)a2 duration:(double)a3;
- (void)traceCloseContainer:(long long)a0;
- (void)traceUpdatePetRegion:(id)a0;
- (void)traceUpdateLinkRegion:(id)a0;
- (void)traceUpdateGiftTrayAnimation:(id)a0;
- (void)traceReceiveMessage:(id)a0;
- (void).cxx_destruct;

@end
