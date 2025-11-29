@interface TVLPlayerItemAccessLogSilenceEvent : TVLPlayerItemLogEvent {
    long long _sumSampledbValue;
    long long _sampleNumber;
}

@property (readonly, nonatomic) long long averageDBValue;

- (void)addSampleDBValue:(long long)a0;
- (id)init;

@end
