@class NSString;

@interface AWEPadPlayerAdapterImpl : NSObject <AWEPadPlayerAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enablePlayerAdaptation;
- (double)playerAdaptationLimitedRatio;
- (BOOL)canUseFillScaleModelWithModel:(id)a0 videoSizeType:(long long)a1;
- (BOOL)enablePlayerAdaptationOCR;
- (id)adaptationRule;
- (BOOL)enableScaleModelAdaptation:(id)a0;
- (long long)scaleModeForPadVideoWithModel:(id)a0 playerSize:(struct CGSize { double x0; double x1; })a1;

@end
