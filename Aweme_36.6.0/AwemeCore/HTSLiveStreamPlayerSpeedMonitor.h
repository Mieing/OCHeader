@class NSString, NSArray;
@protocol IESLiveRoomService, IESLivePlayerProtocol;

@interface HTSLiveStreamPlayerSpeedMonitor : NSObject <IESLiveReferenceActions, IESLiveStreamPlayerSpeedMonitorService>

@property (nonatomic) BOOL isMonitorOn;
@property (nonatomic) long long countThreshold;
@property (nonatomic) double startMonitorDelaySeconds;
@property (nonatomic) double monitorIntervalSeconds;
@property (nonatomic) double largerThreshFactor;
@property (nonatomic) double smallerThreshFactor;
@property (nonatomic) BOOL inMonitoringStreamPlayerNetSpeed;
@property (weak, nonatomic) id<IESLivePlayerProtocol> currentPlayer;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *currentResolutionKey;
@property (copy, nonatomic) NSArray *qualitiesArray;
@property (nonatomic) long long largerSpeedCount;
@property (nonatomic) long long smallerSpeedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didSetAttachingDIContext;
- (void)didEnterAudienceRoom;
- (void)didLeaveAudienceRoom;
- (void)monitorPlayer:(id)a0 roomModel:(id)a1 resolutionKey:(id)a2 qualitiesArray:(id)a3;
- (long long)currentPeriodSpeedStatus;
- (void)_beginMonitor;
- (void)_stopMonitor;
- (void)_checkStreamPlayerSpeed;
- (void)_processDownloadSpeed:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
