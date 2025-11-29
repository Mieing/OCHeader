@class EndingPageAnchorInfo, EndingPageStyle, NSMutableArray, EndingPageScheduleButton, RecommendedRooms, EndingPageGuideCardInfo, AnchorColumn, EndingPageCardInfo, EndingPageInteractive, EndingReplayInfo, LivePreviewVideo, EndingPagePlayback, EndingPageReservation;

@interface EndingPageResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) EndingPageAnchorInfo *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (retain, nonatomic) RecommendedRooms *recommendRoom;
@property (nonatomic) BOOL hasRecommendRoom;
@property (retain, nonatomic) EndingPageReservation *decorationReservation;
@property (nonatomic) BOOL hasDecorationReservation;
@property (retain, nonatomic) EndingPageInteractive *interactive;
@property (nonatomic) BOOL hasInteractive;
@property (retain, nonatomic) NSMutableArray *episodeListArray;
@property (readonly, nonatomic) unsigned long long episodeListArray_Count;
@property (retain, nonatomic) NSMutableArray *appointmentListArray;
@property (readonly, nonatomic) unsigned long long appointmentListArray_Count;
@property (retain, nonatomic) EndingReplayInfo *endingReplayInfo;
@property (nonatomic) BOOL hasEndingReplayInfo;
@property (nonatomic) int nextWaitSeconds;
@property (retain, nonatomic) EndingPageCardInfo *endingPageCard;
@property (nonatomic) BOOL hasEndingPageCard;
@property (retain, nonatomic) LivePreviewVideo *livePreviewVideo;
@property (nonatomic) BOOL hasLivePreviewVideo;
@property (retain, nonatomic) EndingPageStyle *endingPageStyle;
@property (nonatomic) BOOL hasEndingPageStyle;
@property (retain, nonatomic) EndingPagePlayback *endingPagePlayback;
@property (nonatomic) BOOL hasEndingPagePlayback;
@property (retain, nonatomic) EndingPageGuideCardInfo *guideCardInfo;
@property (nonatomic) BOOL hasGuideCardInfo;
@property (retain, nonatomic) AnchorColumn *anchorColumn;
@property (nonatomic) BOOL hasAnchorColumn;
@property (retain, nonatomic) EndingPageScheduleButton *scheduleButton;
@property (nonatomic) BOOL hasScheduleButton;

+ (id)descriptor;

@end
