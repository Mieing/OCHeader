@class NSString;

@interface AWEIMWCDBTrackImpl : NSObject <WCTTrackProtocol, SSWCTTrackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 withParams:(id)a1;

@end
