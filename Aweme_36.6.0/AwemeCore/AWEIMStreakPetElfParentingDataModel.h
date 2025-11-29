@class NSDictionary;

@interface AWEIMStreakPetElfParentingDataModel : NSObject

@property (readonly, nonatomic) long long petId;
@property (readonly, nonatomic) long long stage;
@property (readonly, nonatomic) BOOL isMax;
@property (readonly, copy, nonatomic) NSDictionary *cardInfo;
@property (readonly, nonatomic) long long dataVersion;
@property (readonly, nonatomic) long long acceptMsgID;
@property (readonly, nonatomic) double setDefaultStageNoticeTimestamp;
@property (readonly, nonatomic) double feAchieveUpdateTime;
@property (readonly, nonatomic) double serverAchieveUpdateTime;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
