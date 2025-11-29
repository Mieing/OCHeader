@class NSArray, NSString, BDPActivityStyleModel;

@interface BDPActivityModel : NSObject

@property (nonatomic) long long activityId;
@property (retain, nonatomic) NSArray *couponTaskIds;
@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) BDPActivityStyleModel *style;
@property (nonatomic) long long effectiveStartTime;
@property (nonatomic) long long effectiveEndTime;
@property (nonatomic) long long effectiveEndDuration;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
