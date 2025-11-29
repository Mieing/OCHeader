@class NSArray, NSNumber, NSString;

@interface AWELiveCachePoolResult : NSObject

@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSNumber *genTime;
@property (copy, nonatomic) NSString *errorDescription;
@property (nonatomic) long long code;

- (void).cxx_destruct;

@end
