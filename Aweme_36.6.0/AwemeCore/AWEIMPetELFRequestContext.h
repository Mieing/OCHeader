@class NSNumber;

@interface AWEIMPetELFRequestContext : NSObject

@property (nonatomic) long long requestType;
@property (copy, nonatomic) NSNumber *convShortID;
@property (nonatomic) long long pollingTimes;
@property (nonatomic) long long extVersion;

- (void).cxx_destruct;

@end
