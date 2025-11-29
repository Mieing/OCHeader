@class NSArray, HostPathMatchConfig, NSSet, NSString, NSDate;

@interface UrlMatchRule : NSObject

@property (retain, nonatomic) HostPathMatchConfig *matchConfig;
@property (copy, nonatomic) NSArray *concurrentHost;
@property (nonatomic) long long maxFailCount;
@property (nonatomic) long long forbiddenDurationSeconds;
@property (copy, nonatomic) NSSet *blockErrorCodeSet;
@property (nonatomic) unsigned short connectIntervalMillis;
@property (nonatomic) BOOL isRetryForNot2xxCode;
@property (copy, nonatomic) NSString *rsName;
@property (nonatomic) BOOL isBypassRouteSelection;
@property long long continuousFailCount;
@property (retain) NSDate *firstForbiddenTime;

- (BOOL)isEqualToRule:(id)a0;
- (id)initWithMatchConfig:(id)a0 concurrentHost:(id)a1 maxFailCount:(long long)a2 forbiddenDurationSeconds:(long long)a3 blockErrorCodeSet:(id)a4 connectIntervalMillis:(unsigned short)a5 isRetryForNot2xxCode:(BOOL)a6 refineWithRouteSelectionName:(id)a7 isBypassRouteSelection:(BOOL)a8;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
