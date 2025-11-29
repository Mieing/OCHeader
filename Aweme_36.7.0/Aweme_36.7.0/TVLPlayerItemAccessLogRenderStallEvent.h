@interface TVLPlayerItemAccessLogRenderStallEvent : TVLPlayerItemAccessLogStallEvent

@property (nonatomic) long long type;
@property (nonatomic) long long renderStallTime;
@property (nonatomic) long long renderStallTimeFPS;

+ (id)renderStallEventWithStallEvent:(id)a0 type:(long long)a1;

- (id)initWithType:(long long)a0 stallTime:(long long)a1;

@end
