@interface WCFinderSubtitleTimeSection : NSObject

@property (nonatomic) unsigned long long beginTimeInMs;
@property (nonatomic) unsigned long long endTimeInMs;

- (id)initWithBeginTime:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (id)description;

@end
