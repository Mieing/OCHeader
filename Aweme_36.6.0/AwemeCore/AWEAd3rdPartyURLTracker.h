@class NSString;

@interface AWEAd3rdPartyURLTracker : NSObject <BDATC2STrackerDelegate>

@property (class, readonly, nonatomic) AWEAd3rdPartyURLTracker *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendURLResponse:(id)a0 eventModel:(id)a1 userInfo:(id)a2;
- (void)bizDowngradeAsyncbyteADTrackURL;
- (void)byteADTrackURLStrings:(id)a0 withContext:(id)a1;
- (void)trackAdEvent:(id)a0 context:(id)a1;
- (void)logResult:(BOOL)a0 withInfo:(id)a1;
- (void)trackURLStrings:(id)a0 withContext:(id)a1;
- (void)supervise3rdPartyURLTrakingWithURLString:(id)a0 statusCode:(long long)a1 timestamp:(long long)a2 userAgent:(id)a3 context:(id)a4;

@end
