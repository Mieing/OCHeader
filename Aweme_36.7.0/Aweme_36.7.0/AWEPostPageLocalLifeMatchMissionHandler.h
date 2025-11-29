@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageLocalLifeMatchMissionHandler : NSObject <AWEPostPageLocalLifeMatchMissionService>

@property (nonatomic) long long cleanLocalLifeMatchMissionSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (BOOL)isLocalLifeMatchMissionFromTask;
- (void)trackCommonMissionEventWithEventType:(long long)a0 missionState:(long long)a1;
- (void)trackLifeMissionEventWithEventType:(long long)a0 idx:(long long)a1 hasTask:(BOOL)a2;
- (void).cxx_destruct;
- (id)taskID;

@end
