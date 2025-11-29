@class NSString;

@interface AWEMusicBillboardWeeklyInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *billboardID;
@property (nonatomic) long long billboardEditionNumber;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
