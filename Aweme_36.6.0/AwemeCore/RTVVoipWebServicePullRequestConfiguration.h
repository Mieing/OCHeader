@class NSNumber;

@interface RTVVoipWebServicePullRequestConfiguration : NSObject

@property (readonly, nonatomic) NSNumber *callID;
@property (readonly, nonatomic) long long roomType;
@property (readonly, nonatomic) BOOL ignoreErrorTips;

- (id)initWithcallID:(id)a0 roomType:(long long)a1 ignoreErrorTips:(BOOL)a2;
- (void).cxx_destruct;

@end
