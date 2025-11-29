@class NSString;

@interface WAJSEventHandler_joinVoIPChat : WAJSEventHandler_OpenVoiceBase {
    NSString *busiAppId;
    int lastJoinSuccTicks;
    int maxMember;
    int currentPeakRoomMemberCount;
    long long startTicks;
}

- (id)init;
- (void)reset;
- (void)handleJSEvent:(id)a0;
- (void).cxx_destruct;

@end
