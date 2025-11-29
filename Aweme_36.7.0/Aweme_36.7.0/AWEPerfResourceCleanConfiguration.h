@class NSSet, NSString;
@protocol AWEPerfResourceCleanStrategy;

@interface AWEPerfResourceCleanConfiguration : NSObject

@property (nonatomic) long long cleanLevel;
@property (nonatomic) unsigned long long cleanType;
@property (copy, nonatomic) NSSet<AWEPerfResourceCleanStrategy> *cleanStrategies;
@property (nonatomic) long long expiredDays;
@property (nonatomic) double maxSize;
@property (nonatomic) long long length;
@property (nonatomic) BOOL cleanDir;
@property (copy, nonatomic) NSString *pathNameRegex;
@property (nonatomic) BOOL atomicCleanDir;
@property (copy, nonatomic) NSSet *includeList;
@property (copy, nonatomic) NSSet *excludeList;
@property (nonatomic) BOOL atTermination;
@property (nonatomic) long long oneTimeCleanID;

- (BOOL)checkSet:(id)a0 isEqualToSet:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
