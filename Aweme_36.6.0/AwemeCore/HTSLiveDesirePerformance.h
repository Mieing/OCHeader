@class NSString, HTSLiveDesirePerformanceItem, HTSLiveDesirePerformanceText;

@interface HTSLiveDesirePerformance : IESLivePBBaseMessage

@property (nonatomic) long long performanceId;
@property (nonatomic) int performanceContentType;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int displayType;
@property (retain, nonatomic) HTSLiveDesirePerformanceItem *performanceItem;
@property (nonatomic) BOOL hasPerformanceItem;
@property (retain, nonatomic) HTSLiveDesirePerformanceText *performanceText;
@property (nonatomic) BOOL hasPerformanceText;
@property (copy, nonatomic) NSString *releaseTime;
@property (copy, nonatomic) NSString *jumpURL;

+ (id)descriptor;

@end
