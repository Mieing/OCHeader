@class HTSLiveRelaxPaidLiveContainer, NSString, HTSLiveRelaxUrgeLiveData, HTSLiveImage, HTSLiveRelaxPaidLiveDetail, NSMutableArray, HTSLiveRelaxFinishedDesireInfo;

@interface HTSLiveRelaxLiveDynamicDetailsForAudienceData : IESLivePBBaseMessage

@property (nonatomic) long long maxTime;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long pushStatus;
@property (retain, nonatomic) NSMutableArray *announcementDataArray;
@property (readonly, nonatomic) unsigned long long announcementDataArray_Count;
@property (retain, nonatomic) NSMutableArray *previewDataArray;
@property (readonly, nonatomic) unsigned long long previewDataArray_Count;
@property (retain, nonatomic) NSMutableArray *historyDataArray;
@property (readonly, nonatomic) unsigned long long historyDataArray_Count;
@property (nonatomic) BOOL hideAllHistory;
@property (copy, nonatomic) NSString *anchorNickName;
@property (retain, nonatomic) HTSLiveImage *anchorAvatar;
@property (nonatomic) BOOL hasAnchorAvatar;
@property (retain, nonatomic) NSMutableArray *bannerArray;
@property (readonly, nonatomic) unsigned long long bannerArray_Count;
@property (retain, nonatomic) HTSLiveRelaxFinishedDesireInfo *finishedDesireInfo;
@property (nonatomic) BOOL hasFinishedDesireInfo;
@property (retain, nonatomic) HTSLiveRelaxPaidLiveDetail *paidLiveData;
@property (nonatomic) BOOL hasPaidLiveData;
@property (retain, nonatomic) HTSLiveRelaxPaidLiveContainer *paidLive;
@property (nonatomic) BOOL hasPaidLive;
@property (nonatomic) int appointmentShareSwitch;
@property (nonatomic) int isFans;
@property (retain, nonatomic) HTSLiveRelaxUrgeLiveData *urgeLiveData;
@property (nonatomic) BOOL hasUrgeLiveData;
@property (retain, nonatomic) NSMutableArray *recentReplayArray;
@property (readonly, nonatomic) unsigned long long recentReplayArray_Count;
@property (retain, nonatomic) NSMutableArray *activityDataArray;
@property (readonly, nonatomic) unsigned long long activityDataArray_Count;

+ (id)descriptor;

@end
