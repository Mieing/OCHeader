@class NSString;

@interface HMDHTTPResponseInfo : NSObject

@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *responseScene;
@property (nonatomic) long long isForeground;
@property (nonatomic) double inAppTime;

- (void).cxx_destruct;
- (id)init;

@end
