@class NSString;
@protocol IESLiveClientAIService;

@interface IESLiveRevenueAIRoomTitleService : IESLiveGeneralBaseService <IESLiveRevenueAIRoomTitleService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)fetchRoomAITitleWithCompletion:(id /* block */)a0;
- (void)p_triggerAITitleAlgorithmTask:(id /* block */)a0;
- (void).cxx_destruct;

@end
