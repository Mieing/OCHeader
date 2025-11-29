@class NSMutableDictionary, IESLiveGCDTimer;
@protocol IESLiveRoomService;

@interface IESLiveUserEnterMonitor : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) unsigned long long memberReceivedCount;
@property (nonatomic) unsigned long long memberFilterCount;
@property (nonatomic) unsigned long long memberDropCount;
@property (nonatomic) unsigned long long memberDisplayCount;
@property (nonatomic) unsigned long long notifyReceivedCount;
@property (nonatomic) unsigned long long notifyFilterCount;
@property (nonatomic) unsigned long long notifyDropCount;
@property (nonatomic) unsigned long long notifyDisplayCount;
@property (retain, nonatomic) NSMutableDictionary *msgStageMap;

- (void)didSetAttachingDIContext;
- (void)willUnmount;
- (void)recordMessage:(id)a0 withFlowStage:(unsigned long long)a1;
- (void)recordMessageReceived:(id)a0;
- (void)logAllStageMsgIds;
- (void)startCollectionIfNeeded;
- (void)reportDisplayData;
- (id)descriptionForStage:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
