@class NSString;

@interface CGXLocationRequestMessage : NSObject

@property (nonatomic) long long actionType;
@property (nonatomic) long long providerType;
@property (copy, nonatomic) NSString *packageName;
@property (nonatomic) long long quality;
@property (nonatomic) long long interval;
@property (nonatomic) long long fastInterval;
@property (nonatomic) long long expireAt;
@property (nonatomic) long long numUpdates;
@property (nonatomic) float smallestDisplacement;

- (void).cxx_destruct;
- (id)description;

@end
