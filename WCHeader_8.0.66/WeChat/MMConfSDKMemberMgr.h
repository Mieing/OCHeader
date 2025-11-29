@class NSString, NSArray, MMTimer, NSMutableArray;

@interface MMConfSDKMemberMgr : NSObject {
    NSMutableArray *_currentInRoomMembers;
    NSMutableArray *_memberChangeListeners;
    NSMutableArray *_lastSpeakers;
    MMTimer *_timer;
    NSMutableArray *_allTalkedMembers;
    NSMutableArray *_cachedMembersInfo;
}

@property (nonatomic) long long mroomid;
@property (nonatomic) long long mImRoomId;
@property (copy) NSString *mMultiTalkGroupId;
@property (copy) NSString *mWxGroupId;
@property (copy) NSString *mMultiTalkClientGroupId;
@property (retain) NSArray *mMutilTalkGroupMemberList;
@property (copy) NSString *mCreatedUserName;
@property (copy) NSString *mCustomMutilTalkGrpName;
@property (nonatomic) long long mMemberListSeq;
@property (copy) NSString *mSdkGroupId;
@property (nonatomic) int mRoutId;
@property (copy) NSString *mSubcribeBigUsername;
@property (copy) NSString *mHiresScreenUsername;

- (id)init;
- (void)initData;
- (void)resetMembers;
- (void)updateMembers:(id)a0 users:(id)a1 selfname:(id)a2 callee:(id)a3 callback:(id /* block */)a4;
- (void)updateMembers:(id)a0 users:(id)a1 selfname:(id)a2 callee:(id)a3 completion:(id /* block */)a4;
- (void)updateMembersCache:(id)a0 reliable:(int)a1;
- (void)updateMembersCache:(id)a0 openid:(id)a1 reliable:(int)a2;
- (id)getCurrentRoomMembers;
- (id)getAllTalkedMembers;
- (BOOL)getIfAlreadyInTalkedMembers:(id)a0;
- (id)getOpenIdByMemberId:(unsigned int)a0;
- (void)startListenToSpeakerChange;
- (void)stopListenToSpeakerChange;
- (void)onTimerExpired;
- (void)addSpeakerChangeCallback:(id /* block */)a0;
- (BOOL)isSpeakersEqual:(id)a0;
- (id)getMemberByOpenid:(id)a0;
- (id)getMemberByUsername:(id)a0;
- (id)getMemberByMemberid:(int)a0;
- (id)getMemberCacheByOpenid:(id)a0;
- (void)updateMemberScreenStatus:(int)a0 ScreenStatus:(int)a1;
- (void)updateAllMemberScreenStatus:(id)a0;
- (void)updateMembersScreenStatusForVideoMemberChanged:(id)a0;
- (void).cxx_destruct;

@end
