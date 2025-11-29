@class NSString;

@interface AWELiveRecordMissionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *liveSecUid;
@property (copy, nonatomic) NSString *liveStartTime;
@property (copy, nonatomic) NSString *liveEndTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
