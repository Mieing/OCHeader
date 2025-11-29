@class NSArray, NSString, IESLiveMultiChannelInfo, IESLiveIntercomCommentConfig, IESLiveRevenueInteractAudioHandler, HTSLiveIntercomChangeSyncData, IESLiveAudioPunishModel;
@protocol IESLiveInteractUserModel;

@interface IESLiveRevenueSwitchScenceExtraInfo : NSObject

@property (copy, nonatomic) NSString *connectionType;
@property (nonatomic) long long fromStatus;
@property (nonatomic) BOOL isChorusMute;
@property (retain, nonatomic) id<IESLiveInteractUserModel> silenceVolumeUser;
@property (nonatomic) unsigned long long inviteeListType;
@property (nonatomic) long long actionFromSource;
@property (nonatomic) double connectionStartTime;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (retain, nonatomic) IESLiveIntercomCommentConfig *intercomCommentConfig;
@property (retain, nonatomic) HTSLiveIntercomChangeSyncData *intercomMessageModel;
@property (nonatomic) unsigned long long rtcStatus;
@property (nonatomic) BOOL isMultiInvite;
@property (nonatomic) BOOL needShowLastResult;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *traceID;
@property (copy, nonatomic) NSString *shownGuideTextAnchorId;
@property (copy, nonatomic) NSString *linkerSessionId;
@property (retain, nonatomic) IESLiveAudioPunishModel *audioPunishModel;
@property (retain, nonatomic) IESLiveRevenueInteractAudioHandler *audioHandler;
@property (retain, nonatomic) NSArray *allAiUserList;

- (void).cxx_destruct;

@end
