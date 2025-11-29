@class HTSLiveChorusVolumeChangedContent, HTSLiveChorusGiftSentContent, HTSLiveChorusFinishContent, HTSLiveChorusTriggerReportContent, HTSLiveChorusInitContent, HTSLiveChorusConcertStartContent, HTSLiveChorusFollowCDNStopContent, HTSLiveCommon, HTSLiveChorusFollowCDNStartContent, HTSLiveChorusStageContent, HTSLiveConcertSongPauseContent;

@interface HTSLiveKtvChorusActionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveChorusGiftSentContent *giftSentContent;
@property (retain, nonatomic) HTSLiveChorusVolumeChangedContent *volumeChangedContent;
@property (retain, nonatomic) HTSLiveChorusStageContent *stageUpdateContent;
@property (retain, nonatomic) HTSLiveChorusFollowCDNStartContent *cdnStartContent;
@property (retain, nonatomic) HTSLiveChorusFollowCDNStopContent *cdnStopContent;
@property (retain, nonatomic) HTSLiveChorusInitContent *initContent;
@property (retain, nonatomic) HTSLiveChorusFinishContent *finishContent;
@property (retain, nonatomic) HTSLiveChorusTriggerReportContent *triggerReportContent;
@property (retain, nonatomic) HTSLiveConcertSongPauseContent *concertSongPauseContent;
@property (retain, nonatomic) HTSLiveChorusConcertStartContent *chorusConcertStartContent;

+ (id)descriptor;

@end
