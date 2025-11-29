@class IESLiveUserVersionInfo, NSString, IESLiveLinkmicInfo, IESLiveMultiRtcInfo, IESLiveMultiLiveCoreInfo, IESLiveLinkmicInviteResponse_ResponseData_InviteeInfo, IESLiveMultiChannelInfo, NSMutableArray, VoteSetting, IESLivePreRTCInfo, HTSLiveRoom;

@interface IESLiveLinkmicInviteResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) int vendor;
@property (copy, nonatomic) NSString *channelIdStr;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL rtcJoinChannel;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (retain, nonatomic) NSMutableArray *roomTagsArray;
@property (readonly, nonatomic) unsigned long long roomTagsArray_Count;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (readonly, nonatomic) unsigned long long userTagsArray_Count;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (nonatomic) BOOL rtcPushStream;
@property (copy, nonatomic) NSString *signExtra;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (retain, nonatomic) IESLiveLinkmicInfo *linkmicInfo;
@property (nonatomic) BOOL hasLinkmicInfo;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL inviteeWithAudience;
@property (nonatomic) int anchorPkCheck;
@property (retain, nonatomic) NSMutableArray *canNotPassAnchorIdsArray;
@property (readonly, nonatomic) unsigned long long canNotPassAnchorIdsArray_Count;
@property (nonatomic) int switchPlayMode;
@property (retain, nonatomic) VoteSetting *voteSetting;
@property (nonatomic) BOOL hasVoteSetting;
@property (retain, nonatomic) IESLivePreRTCInfo *preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (nonatomic) BOOL supportMultiInvite;
@property (nonatomic) long long waitSec;
@property (retain, nonatomic) IESLiveUserVersionInfo *inviteeVersionInfo;
@property (nonatomic) BOOL hasInviteeVersionInfo;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (retain, nonatomic) HTSLiveRoom *inviteeRoom;
@property (nonatomic) BOOL hasInviteeRoom;
@property (nonatomic) int bizType;
@property (copy, nonatomic) NSString *linkmicLynxData;
@property (copy, nonatomic) NSString *eventTrackingInfo;
@property (copy, nonatomic) NSString *gameAppId;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) IESLiveLinkmicInviteResponse_ResponseData_InviteeInfo *inviteeInfo;
@property (nonatomic) BOOL hasInviteeInfo;

+ (id)descriptor;

@end
