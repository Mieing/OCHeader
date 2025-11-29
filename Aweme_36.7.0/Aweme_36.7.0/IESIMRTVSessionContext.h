@class NSArray, NSNumber;

@interface IESIMRTVSessionContext : NSObject

@property (nonatomic) long long rtvType;
@property (nonatomic) long long rtvCallType;
@property (copy, nonatomic) NSArray *userIDs;
@property (nonatomic) long long voipEnterFrom;
@property (nonatomic) BOOL rtvIsConnected;
@property (nonatomic) BOOL isFeedSharing;
@property (nonatomic) BOOL isInGaming;
@property (retain, nonatomic) NSNumber *roomCapacity;

- (void).cxx_destruct;

@end
