@class MMTimer, NSMutableArray;

@interface MMOpenVoiceMemberMgr : NSObject {
    NSMutableArray *_lastSpeakers;
    NSMutableArray *_currentInRoomMembers;
    NSMutableArray *_currVideoMembers;
    NSMutableArray *_memberChangeListeners;
    MMTimer *_timer;
}

- (id)init;
- (void)resetMembers;
- (void)addSpeakerChangeCallback:(id /* block */)a0;
- (id)getCurrentRoomMembers;
- (id)getCurrentVideoMembers;
- (id)getMemberByOpenId:(id)a0;
- (id)getOpenIdByMemberId:(unsigned int)a0;
- (void)startListenToSpeakerChange;
- (void)stopListenToSpeakerChange;
- (void)updateMembers:(id)a0;
- (void)updateAvMembers:(id)a0;
- (void)onTimerExpired;
- (BOOL)isSpeakersEqual:(id)a0;
- (void).cxx_destruct;

@end
