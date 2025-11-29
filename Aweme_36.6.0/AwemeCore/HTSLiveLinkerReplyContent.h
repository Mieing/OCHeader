@class IESLiveUserVersionInfo, NSString, HTSLiveLinkerSetting, IESLiveMultiRtcInfo, IESLiveMultiLiveCoreInfo, GPBInt64ObjectDictionary, IESLiveMultiChannelInfo, IESLiveAnchorLayoutInfo, NSMutableArray, IESLivePreRTCInfo, IESLiveAnchorLinkmicChannelInfo, HTSLiveLinkmicInfo;

@interface HTSLiveLinkerReplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (retain, nonatomic) HTSLiveLinkmicInfo *fromUserLinkmicInfo;
@property (nonatomic) BOOL hasFromUserLinkmicInfo;
@property (copy, nonatomic) NSString *toUserId;
@property (retain, nonatomic) HTSLiveLinkmicInfo *toUserLinkmicInfo;
@property (nonatomic) BOOL hasToUserLinkmicInfo;
@property (nonatomic) long long linkType;
@property (nonatomic) long long replyStatus;
@property (retain, nonatomic) HTSLiveLinkerSetting *linkerSetting;
@property (nonatomic) BOOL hasLinkerSetting;
@property (nonatomic) BOOL bizJoinChannel;
@property (nonatomic) int multiPkMode;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveAnchorLinkmicChannelInfo *backupLinkmicInfo;
@property (nonatomic) BOOL hasBackupLinkmicInfo;
@property (copy, nonatomic) NSString *kickedUsersUniqueId;
@property (nonatomic) long long matchType;
@property (nonatomic) long long version;
@property (nonatomic) long long anchorUiLayout;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) int switchToScene;
@property (copy, nonatomic) NSString *battleConfigSetting;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (retain, nonatomic) IESLiveUserVersionInfo *replyVersionInfo;
@property (nonatomic) BOOL hasReplyVersionInfo;
@property (retain, nonatomic) IESLiveAnchorLayoutInfo *layoutInfo;
@property (nonatomic) BOOL hasLayoutInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (retain, nonatomic) IESLivePreRTCInfo *preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (nonatomic) int toBizType;
@property (nonatomic) int bizType;
@property (copy, nonatomic) NSString *gameAppId;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

@end
