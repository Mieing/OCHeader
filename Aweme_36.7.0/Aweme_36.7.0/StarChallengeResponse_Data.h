@class NSMutableArray, HTSLiveUser;

@interface StarChallengeResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (nonatomic) long long activityStartTime;
@property (nonatomic) long long activityEndTime;
@property (nonatomic) BOOL anchorSignedUp;
@property (retain, nonatomic) HTSLiveUser *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) long long anchorStarCount;
@property (nonatomic) long long lastGainStarTime;
@property (retain, nonatomic) NSMutableArray *taskInfoArray;
@property (readonly, nonatomic) unsigned long long taskInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *starRoomsArray;
@property (readonly, nonatomic) unsigned long long starRoomsArray_Count;
@property (retain, nonatomic) NSMutableArray *accumulateTaskInfoArray;
@property (readonly, nonatomic) unsigned long long accumulateTaskInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *simultaneousTaskInfoArray;
@property (readonly, nonatomic) unsigned long long simultaneousTaskInfoArray_Count;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long currentScore;
@property (nonatomic) long long recommendGiftId;

+ (id)descriptor;

@end
