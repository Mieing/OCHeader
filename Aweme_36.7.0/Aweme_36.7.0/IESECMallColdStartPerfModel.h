@class NSString, NSArray;

@interface IESECMallColdStartPerfModel : NSObject

@property (nonatomic) double appLaunchTime;
@property (nonatomic) double appLaunchEndTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double preloadStartTime;
@property (nonatomic) double highGroupEndTime;
@property (nonatomic) double preloadEndTime;
@property (nonatomic) double mallOpenTime;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSArray *failureUrls;
@property (copy, nonatomic) NSString *errorInfo;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long totalHigroupCount;
@property (nonatomic) unsigned long long successCount;
@property (nonatomic) unsigned long long successHigroupCount;
@property (nonatomic) long long status;

- (id)toParamsDictionary;
- (void).cxx_destruct;

@end
