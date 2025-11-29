@class NSString;

@interface LynxImpressionView : LynxUI <LynxInnerImpressionViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1051;

- (void)lynxImpressionWillManualExposureNotification:(id)a0;
- (void)impressionPercent:(long long)a0 requestReset:(BOOL)a1;
- (void)impression;
- (void)dealloc;
- (void)exit;
- (id)createView;

@end
