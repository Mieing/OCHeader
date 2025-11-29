@class NSString;

@interface AWEPadPureModeAdapter : HTSService <AWEPadPureModeAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)padPureBoxView;
- (id)padSpeedPanel;
- (BOOL)enableOptimizePadLayout;
- (BOOL)shouldShowPadStyleBottomBar;
- (id)weakTarget;

@end
