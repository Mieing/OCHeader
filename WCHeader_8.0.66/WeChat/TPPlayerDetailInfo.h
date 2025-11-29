@interface TPPlayerDetailInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long timeSince1970Ms;
@property (nonatomic) long long elapsedTimeSinceBootMs;

- (id)init;
- (id)initWithType:(long long)a0 utcTimeMs:(long long)a1 elapsedTimeSinceBootMs:(long long)a2;

@end
