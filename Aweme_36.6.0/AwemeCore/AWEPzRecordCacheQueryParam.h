@class NSString, NSArray, NSDate, NSNumber;

@interface AWEPzRecordCacheQueryParam : NSObject

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSArray *excludedScopes;
@property (copy, nonatomic) NSDate *earliestDate;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSNumber *consume;

- (void).cxx_destruct;

@end
