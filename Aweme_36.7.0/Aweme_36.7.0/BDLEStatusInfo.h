@interface BDLEStatusInfo : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) long long positionInMs;
@property (nonatomic) long long durationInMs;

- (id)description;

@end
