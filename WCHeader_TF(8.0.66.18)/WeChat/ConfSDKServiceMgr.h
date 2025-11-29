@class NSString, NSRecursiveLock;

@interface ConfSDKServiceMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *mEngineLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (int)sendVideoData:(char *)a0 dataLen:(int)a1 imgBuf:(struct __CVBuffer { } *)a2 width:(int)a3 height:(int)a4;
- (void)onVideoFrame:(int)a0 data:(const char *)a1 dataLen:(int)a2 width:(int)a3 height:(int)a4 format:(int)a5;
- (void)recvNotify:(id)a0 datalen:(int)a1 groupId:(id)a2 sdkGroupId:(id)a3 displayUserList:(id)a4 notifyFrom:(int)a5;
- (id)getMemberByMemberid:(int)a0;
- (id)getMemberByUsername:(id)a0;
- (id)getTalkingMember;
- (id)sortedTalkingMembers;
- (id)getMemberQualityInfoList;
- (int)engineDoMemberSelectForView:(id)a0;
- (void)subscribeByUsername:(id)a0 NeedBigVideo:(BOOL)a1;
- (void)doVideoScreenSharingSecurityCheck:(id)a0 fileId:(id)a1;
- (int)sendScreenData:(void *)a0;
- (int)invite:(id)a0 groupId:(id)a1;
- (void)hangup:(int)a0;
- (void)accept:(unsigned long long)a0;
- (void)addMembers:(id)a0;
- (void)EndSysCallInterruption;
- (void)BeginSysCallInterruption;
- (void)setMicroPhoneMute:(BOOL)a0;
- (void)setSpeakerPhone:(BOOL)a0;
- (void)stopVideo;
- (void)switchVideoToCamera;
- (void)switchVideoToScreen;
- (void)switchVideoToScreenPaused;
- (int)checkUsingMultiPathCellularConn;
- (void)subscribeByUsernameList:(id)a0 LargeUsers:(id)a1;
- (void)HeadSetPlugin:(BOOL)a0;
- (void).cxx_destruct;

@end
