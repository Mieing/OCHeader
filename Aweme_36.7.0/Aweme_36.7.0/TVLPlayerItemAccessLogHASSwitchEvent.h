@class NSString, NSError;

@interface TVLPlayerItemAccessLogHASSwitchEvent : TVLPlayerItemLogEvent

@property (readonly, copy, nonatomic) NSString *fromResolution;
@property (readonly, copy, nonatomic) NSString *toResolution;
@property (readonly, nonatomic) NSError *error;

- (void)HASSwitchResolutionFrom:(id)a0 to:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
