@class NSString;

@interface IESLiveLinkRealTimeChorusRTCClient : IESLiveLinkBizBaseRTCClient <IESLiveLinkRealTimeChorusRTCClientProtocol>

@property (copy, nonatomic) NSString *alignmentUid;
@property (copy, nonatomic) NSString *leaderUid;

- (void)setAudioAlignmentProperty:(id)a0 mainRoomID:(id)a1 mode:(long long)a2;
- (void)setAudioAlignment:(id)a0 mainRoomID:(id)a1 mode:(long long)a2;
- (void).cxx_destruct;

@end
