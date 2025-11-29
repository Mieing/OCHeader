@class NSString, EnterFormatResponse_FormatInfo, NSMutableDictionary, EnterFormatResponse_RtcInfo, FormatUserInfo;

@interface EnterFormatResponse_Data : IESLivePBBaseMessage <HTSFormatRoomService>

@property (nonatomic) BOOL finished;
@property (readonly, nonatomic) EnterFormatResponse_Data *roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) EnterFormatResponse_FormatInfo *formatInfo;
@property (nonatomic) BOOL hasFormatInfo;
@property (retain, nonatomic) EnterFormatResponse_RtcInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;
@property (retain, nonatomic) FormatUserInfo *owner;
@property (nonatomic) BOOL hasOwner;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreInfo;
@property (copy, nonatomic) NSString *avatarRtcUid;
@property (nonatomic) int avatarInteractiveMode;
@property (nonatomic) int userInteractiveMode;
@property (copy, nonatomic) NSString *avatarAliasName;
@property (copy, nonatomic) NSString *discussionTopic;
@property (copy, nonatomic) NSString *complianceText;
@property (nonatomic) BOOL disableAvatarSwitchMode;
@property (copy, nonatomic) NSString *disableAvatarSwitchModeReason;
@property (nonatomic) BOOL isSendWelcome;
@property (copy, nonatomic) NSString *bizRoomId;
@property (nonatomic) long long teamType;
@property (copy, nonatomic) NSString *domainCode;
@property (nonatomic) BOOL isSendTopicCard;
@property (nonatomic) int topicCardStyle;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (void)_aweLazyRegisterStaticLoad_Local;
+ (id)descriptor;

@end
