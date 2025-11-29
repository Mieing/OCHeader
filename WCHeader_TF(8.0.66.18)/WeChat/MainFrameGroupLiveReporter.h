@class NSString, NSMutableDictionary;

@interface MainFrameGroupLiveReporter : MMUserService <MMGroupLiveMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *chatroomLiveInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)logReceiveGroupLiveMsg:(id)a0;
- (void)logEnterSessionWithGroupLive:(id)a0 muteGroup:(BOOL)a1;
- (id)getOpenedGroupLiveIds:(id)a0;
- (BOOL)shouldShowGroupReddot:(id)a0;
- (void)onLiveCountChanged:(id)a0;
- (void).cxx_destruct;

@end
