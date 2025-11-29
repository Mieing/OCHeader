@class NSString, IESLiveMultiChannelInfo, IESLiveUserVersionInfo, IESLiveAnchorLayoutInfo, IESLiveAnchorLinkmicChannelInfo;

@interface PermitResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) long long linkMicId;
@property (nonatomic) BOOL joinable;
@property (nonatomic) int confluenceType;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcAppSign;
@property (nonatomic) long long channelId;
@property (copy, nonatomic) NSString *fromUid;
@property (copy, nonatomic) NSString *toUid;
@property (nonatomic) long long fromRoomId;
@property (nonatomic) long long toRoomId;
@property (nonatomic) int linkMicType;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (retain, nonatomic) IESLiveAnchorLinkmicChannelInfo *backupLinkmicInfo;
@property (nonatomic) BOOL hasBackupLinkmicInfo;
@property (nonatomic) BOOL bizJoinChannel;
@property (retain, nonatomic) IESLiveAnchorLayoutInfo *layoutInfo;
@property (nonatomic) BOOL hasLayoutInfo;
@property (retain, nonatomic) IESLiveUserVersionInfo *applyVersionInfo;
@property (nonatomic) BOOL hasApplyVersionInfo;
@property (copy, nonatomic) NSString *linkmicLynxData;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

@end
