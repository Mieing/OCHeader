@class NSString;

@interface AWETrackerProtocolImpl : NSObject <AWETrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBlockV1WithEvent:(id)a0;
- (BOOL)shouldBlockV3DoubleSendWithEvent:(id)a0;
- (BOOL)shouldFilterV1Event:(id)a0;
- (BOOL)shouldSendV1EventWhenTrackV3Event:(id)a0;
- (void)willTrack:(id)a0;

@end
