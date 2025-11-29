@class BDScreenCastPlayItem, NSString;

@interface AWEScreenCastJSBridgeImpl : NSObject <BDSCWebJSBridgeHandlerDelegate, BDByteScreenCastTrackerService, AWEScreenCastObserver>

@property (retain, nonatomic) BDScreenCastPlayItem *playItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerJSBridgeHandler;
+ (void)_aweLazyRegisterLoad;

- (void)didConnectToDevice:(id)a0;
- (void)sendVideoPlayEventWithParams:(id)a0;
- (void)sendVideoOverEventWithCompleted:(BOOL)a0 params:(id)a1;
- (void)sendVideoPlayBrokenEventWithParams:(id)a0;
- (void)invokeWebEvent:(id)a0 uuid:(id)a1 params:(id)a2;
- (void)updatePlayItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
