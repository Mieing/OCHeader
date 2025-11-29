@class NSMutableDictionary, IESLiveMultiChannelInfo, NSDictionary, HTSLiveLinkMessage, JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData, IESLiveLinkMicListResponse, HTSInteractionStreamAppData, NSString, IESLiveMultiAnchorLinkmicLiveCoreInfo, HTSLiveIntercomChangeSyncData, IESLiveLinkmicLinkerAnchorLayoutModel, IESLiveMultiAnchorLinkmicRtcInfo, NSNumber, IESLiveIntercomCommentMediaConfig, IESLiveLinkmicLinkerAdvanceConfig;

@interface IESLiveLinkmicLinkerAnchorModel : NSObject <IESLiveLinkmicLinkerPluginData>

@property (retain, nonatomic) IESLiveLinkmicLinkerAdvanceConfig *config;
@property (nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *theme;
@property (retain, nonatomic) NSMutableDictionary *oppositeUIDToSignExtra;
@property (retain, nonatomic) HTSLiveLinkMessage *replyMessage;
@property (retain, nonatomic) HTSLiveLinkMessage *inviteMessage;
@property (copy, nonatomic) NSNumber *inviteeRoomID;
@property (copy, nonatomic) NSString *inviteeUID;
@property (copy, nonatomic) NSString *inviteeSecUID;
@property (copy, nonatomic) NSString *inviteeLinkmicID;
@property (copy, nonatomic) NSString *replyUID;
@property (copy, nonatomic) NSString *replyLinkmicID;
@property (copy, nonatomic) NSString *applyUID;
@property (copy, nonatomic) NSString *applySecUID;
@property (copy, nonatomic) NSString *applyLinkmicID;
@property (copy, nonatomic) NSString *permitUID;
@property (copy, nonatomic) NSString *permitLinkmicID;
@property (copy, nonatomic) NSString *receiveUID;
@property (copy, nonatomic) NSNumber *inviteRoomID;
@property (copy, nonatomic) NSDictionary *rtcExtraInfo;
@property (nonatomic) long long regionCount;
@property (retain, nonatomic) IESLiveMultiAnchorLinkmicRtcInfo *multiRtcInfo;
@property (retain, nonatomic) IESLiveMultiAnchorLinkmicLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL useMultiChannel;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (retain, nonatomic) JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData *rtcLiveCoreData;
@property (retain, nonatomic) IESLiveLinkmicLinkerAnchorLayoutModel *layoutModel;
@property (nonatomic) int inviteSource;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveLinkMicListResponse *listData;
@property (retain, nonatomic) HTSLiveIntercomChangeSyncData *intercomMessageModel;
@property (retain, nonatomic) IESLiveIntercomCommentMediaConfig *intercomConfig;
@property (readonly, nonatomic) HTSInteractionStreamAppData *seiAppData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)keyWithUserCount:(long long)a0;
- (void)updateMultiChannelInfoWith:(id)a0 shouldMerge:(BOOL)a1;
- (void)updateWithSwitchSceneMessage:(id)a0;
- (void)updateWithInviteMessage:(id)a0;
- (void)updateWithPermitMessage:(id)a0;
- (void)updateWithInviteRespnse:(id)a0;
- (void)updateWithReplyResponse:(id)a0;
- (void)updateWithJoinChannelRespone:(id)a0;
- (void)updateWithReplyMessage:(id)a0;
- (void)updateWithApplyMessage:(id)a0;
- (void)updateWithPermitResponse:(id)a0;
- (void)updateLinkmicSEIParserResult:(id)a0;
- (id)liveCoreInfoWithUserCount:(long long)a0;
- (id)rtcInfoWithUserCount:(long long)a0;
- (void).cxx_destruct;

@end
