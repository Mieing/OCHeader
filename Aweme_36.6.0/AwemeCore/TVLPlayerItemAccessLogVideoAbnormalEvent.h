@interface TVLPlayerItemAccessLogVideoAbnormalEvent : TVLPlayerItemLogEvent

@property (nonatomic) long long abnormalCode;
@property (nonatomic) BOOL pureColor;
@property (nonatomic) long long notifyTs;

- (id)initWithCode:(long long)a0 :(BOOL)a1;

@end
