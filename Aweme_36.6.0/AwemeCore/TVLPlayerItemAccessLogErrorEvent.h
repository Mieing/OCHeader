@class NSError;

@interface TVLPlayerItemAccessLogErrorEvent : TVLPlayerItemLogEvent

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasRecovered;

- (void).cxx_destruct;
- (void)recover;

@end
