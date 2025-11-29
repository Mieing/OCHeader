@class NSMutableArray, HTSLiveUser;

@interface RankListInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long score;
@property (nonatomic) int onlineStatus;
@property (nonatomic) int performingStatus;
@property (retain, nonatomic) NSMutableArray *audienceInfoListArray;
@property (readonly, nonatomic) unsigned long long audienceInfoListArray_Count;
@property (nonatomic) int pkStatus;

+ (id)descriptor;

@end
