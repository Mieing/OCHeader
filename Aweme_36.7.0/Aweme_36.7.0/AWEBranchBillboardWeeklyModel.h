@class NSString;

@interface AWEBranchBillboardWeeklyModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *billboardID;
@property (nonatomic) int billboardEditionNumber;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
