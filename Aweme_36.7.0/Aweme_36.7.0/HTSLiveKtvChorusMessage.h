@class HTSLiveChorusFinishContent, HTSLiveChorusUserChangedContent, HTSLiveChorusLeaderSettingContent, HTSLiveChorusAccompanimentInfoContent, HTSLiveChorusCDNSingersOnlyContent, HTSLiveChorusComponentSwitchContent, HTSLiveChorusInfoChangedContent, HTSLiveCommon, IESLiveRealTimeChorusInfo, HTSLiveChorusMidiRankContent;

@interface HTSLiveKtvChorusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long messageType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveChorusMidiRankContent *chorusMidiRankContent;
@property (retain, nonatomic) HTSLiveChorusFinishContent *chorusFinishContent;
@property (retain, nonatomic) HTSLiveChorusUserChangedContent *chorusUserChangedContent;
@property (retain, nonatomic) HTSLiveChorusCDNSingersOnlyContent *chorusCdnSingersOnlyContent;
@property (retain, nonatomic) HTSLiveChorusAccompanimentInfoContent *chorusAccompanimentInfoContent;
@property (retain, nonatomic) HTSLiveChorusLeaderSettingContent *chorusLeaderSettingContent;
@property (retain, nonatomic) HTSLiveChorusComponentSwitchContent *chorusComponentSwitchContent;
@property (retain, nonatomic) HTSLiveChorusInfoChangedContent *chorusInfoChangedContent;
@property (retain, nonatomic) IESLiveRealTimeChorusInfo *chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;

+ (id)descriptor;

@end
