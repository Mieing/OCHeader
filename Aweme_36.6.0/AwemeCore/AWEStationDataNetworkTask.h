@class NSString;

@interface AWEStationDataNetworkTask : NSObject

@property (nonatomic) long long count;
@property (nonatomic) long long retryTime;
@property (copy, nonatomic) NSString *ironManId;
@property (nonatomic) BOOL isOnAir;
@property (nonatomic) BOOL isCancel;

- (void).cxx_destruct;

@end
