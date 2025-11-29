@interface TPPlayerEventInfo : NSObject

@property (nonatomic) long long eventId;
@property (nonatomic) long long eventTimeSinceBootMs;
@property (nonatomic) long long eventTimeSince1970Ms;

- (id)init;
- (id)initWithEventId:(long long)a0;

@end
