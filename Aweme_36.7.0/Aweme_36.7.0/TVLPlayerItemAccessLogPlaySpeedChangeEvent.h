@interface TVLPlayerItemAccessLogPlaySpeedChangeEvent : TVLPlayerItemLogEvent {
    float _playSpeed;
}

@property (readonly, nonatomic) float toSpeed;

- (void)logPlaySpeedChange:(float)a0;

@end
