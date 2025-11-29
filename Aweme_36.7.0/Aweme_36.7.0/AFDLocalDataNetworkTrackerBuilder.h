@class NSArray, NSString;

@interface AFDLocalDataNetworkTrackerBuilder : NSObject

@property (copy, nonatomic) NSArray *tableNames;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *requestSubType;
@property (nonatomic) long long syncMode;
@property (nonatomic) BOOL success;
@property (nonatomic) double startTime;

+ (id)builderWithTableNames:(id)a0;

- (id)buildParams;
- (void).cxx_destruct;

@end
