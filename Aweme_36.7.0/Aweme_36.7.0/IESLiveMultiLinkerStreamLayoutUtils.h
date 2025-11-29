@interface IESLiveMultiLinkerStreamLayoutUtils : NSObject

+ (id)sessionsAfterStreamSwitchCheck:(id)a0 userService:(id)a1;
+ (id)sessionsAfterRTCInfoCheck:(id)a0 userService:(id)a1 rtcInfoModel:(id)a2;
+ (id)sortAndMockIfNeedWithSessions:(id)a0 randomTeamLayoutModel:(id)a1;
+ (id)sessionsAfterAiAssistantCheck:(id)a0 userService:(id)a1;
+ (id)sortSessionForLayoutType:(id)a0 layoutModel:(id)a1 userService:(id)a2 isStreamLayout:(BOOL)a3;
+ (id)sortSessionsWithGuest:(id)a0 currentLinkmicId:(id)a1 oppositeLinkmicId:(id)a2;

@end
