@class WCMomentsFinderRecommendationInfo;

@interface MFRItemReportInfo : NSObject

@property (nonatomic) unsigned long long sessionIndex;
@property (retain, nonatomic) WCMomentsFinderRecommendationInfo *finderRecommendationInfo;
@property (nonatomic) BOOL isExposed;
@property (nonatomic) long long unexposureReason;
@property (nonatomic) BOOL isFinalUnexposureReason;

- (void).cxx_destruct;

@end
