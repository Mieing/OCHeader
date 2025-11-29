@class NSString;
@protocol BDSimPlayerImpl;

@interface BDSimTrackingListenerWrapper : NSObject <BDSimPlayerTrackingListener>

@property (weak, nonatomic) id<BDSimPlayerImpl> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEnablePlayTracking;
- (BOOL)canTrackingPlayEvent:(id)a0;
- (void)onTrackingCustomPlayEvent:(id)a0;
- (BOOL)onTrackingEvent:(id)a0 params:(id)a1 userInfo:(id)a2;
- (id)onTrackingEventObject;
- (id)trackingListener;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;

@end
