@class NSString;

@interface IESLiveDetectionFeatureProcessor : NSObject <HMDAPPExitReasonDetectorProtocol>

@property (nonatomic) BOOL anchorRegisted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNetworkChanged:(id)a0;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (void)onAppBecomeActive;
- (void)removeAnchorProcessor;
- (void)registeAnchorProcessor;
- (id)init;
- (void)dealloc;

@end
