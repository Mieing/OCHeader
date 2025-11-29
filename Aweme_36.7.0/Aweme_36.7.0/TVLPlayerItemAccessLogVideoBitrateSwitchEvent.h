@interface TVLPlayerItemAccessLogVideoBitrateSwitchEvent : TVLPlayerItemLogEvent

@property (readonly, nonatomic) long long fromBitrate;
@property (readonly, nonatomic) long long toBitrate;

- (void)bitrateDidSwitchFrom:(long long)a0 to:(long long)a1;

@end
