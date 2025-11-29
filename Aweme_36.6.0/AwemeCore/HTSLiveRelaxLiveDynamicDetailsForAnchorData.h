@class HTSLiveRelaxPaidLiveContainer, NSString, HTSLiveImage, UgcVsReplayInfo, HTSLiveRelaxFinishedDesireInfo, HTSLiveRelaxUrgeLiveData, HTSLiveRelaxPreviewGuidePublishDetail, HTSLiveRelaxAnchorCenterDetail, NSMutableArray, HTSLiveRelaxPaidLiveDetail, HTSLiveAnchorColumn;

@interface HTSLiveRelaxLiveDynamicDetailsForAnchorData : IESLivePBBaseMessage

@property (nonatomic) long long maxTime;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isAnnouncementAvailable;
@property (retain, nonatomic) NSMutableArray *announcementDataArray;
@property (readonly, nonatomic) unsigned long long announcementDataArray_Count;
@property (retain, nonatomic) NSMutableArray *previewDataArray;
@property (readonly, nonatomic) unsigned long long previewDataArray_Count;
@property (nonatomic) BOOL hasVideoPermission;
@property (nonatomic) long long deprecated1;
@property (retain, nonatomic) NSMutableArray *historyDataArray;
@property (readonly, nonatomic) unsigned long long historyDataArray_Count;
@property (nonatomic) BOOL hideAllHistory;
@property (copy, nonatomic) NSString *anchorNickName;
@property (retain, nonatomic) HTSLiveImage *anchorAvatar;
@property (nonatomic) BOOL hasAnchorAvatar;
@property (retain, nonatomic) NSMutableArray *bannerArray;
@property (readonly, nonatomic) unsigned long long bannerArray_Count;
@property (retain, nonatomic) HTSLiveRelaxPreviewGuidePublishDetail *previewGuidePublishData;
@property (nonatomic) BOOL hasPreviewGuidePublishData;
@property (retain, nonatomic) HTSLiveRelaxAnchorCenterDetail *anchorCenterDetail;
@property (nonatomic) BOOL hasAnchorCenterDetail;
@property (retain, nonatomic) HTSLiveRelaxFinishedDesireInfo *finishedDesireInfo;
@property (nonatomic) BOOL hasFinishedDesireInfo;
@property (retain, nonatomic) HTSLiveAnchorColumn *anchorColumn;
@property (nonatomic) BOOL hasAnchorColumn;
@property (retain, nonatomic) HTSLiveRelaxPaidLiveDetail *paidLiveData;
@property (nonatomic) BOOL hasPaidLiveData;
@property (retain, nonatomic) HTSLiveRelaxPaidLiveContainer *paidLive;
@property (nonatomic) BOOL hasPaidLive;
@property (retain, nonatomic) UgcVsReplayInfo *ugcVsReplayInfo;
@property (nonatomic) BOOL hasUgcVsReplayInfo;
@property (nonatomic) int appointmentShareSwitch;
@property (retain, nonatomic) HTSLiveRelaxUrgeLiveData *urgeLiveData;
@property (nonatomic) BOOL hasUrgeLiveData;
@property (retain, nonatomic) NSMutableArray *recentReplayArray;
@property (readonly, nonatomic) unsigned long long recentReplayArray_Count;
@property (retain, nonatomic) NSMutableArray *activityDataArray;
@property (readonly, nonatomic) unsigned long long activityDataArray_Count;

+ (id)descriptor;

@end
