@class NSMutableDictionary, NSString, IESLiveGCDTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveClientLLMSEIAgent : NSObject <IESLiveClientLLMSEIAgentService>

@property (retain, nonatomic) NSMutableDictionary *seiDictionary;
@property (nonatomic) long long seiCount;
@property (retain, nonatomic) IESLiveGCDTimer *seiTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *seiQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)setSEIDicAgentName:(id)a0 agentOutput:(id)a1;
- (id)currentSEIDictionary;
- (void)startSEIAgent;
- (void)stopSEIAgent;
- (id)currentAudienceVCRoomModel;
- (void)sendSEIDictionary;
- (void).cxx_destruct;
- (id)init;

@end
