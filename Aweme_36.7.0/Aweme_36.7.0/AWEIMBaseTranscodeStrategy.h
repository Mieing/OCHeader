@class NSString;

@interface AWEIMBaseTranscodeStrategy : NSObject <AWEIMTranscodeStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)p_remuxBitrateLimit;
- (BOOL)p_getForceTranscodeWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)transAVAsset:(id)a0 processCallback:(id /* block */)a1 dataCallback:(id /* block */)a2 complete:(id /* block */)a3;
- (void)p_pushCommonSettingIntoHTS:(id)a0 asset:(id)a1;
- (void)p_pushTrasncodeOptSettingIntoVideoData:(id)a0 asset:(id)a1 videoTrack:(id)a2;
- (id)p_getRemuxBitrateLimitJson;
- (double)remuxSizeHeightLimit;
- (double)remuxSizeWidthLimit;
- (BOOL)p_VECompileReady;
- (void)p_callVEBusyComplete:(id /* block */)a0;
- (id)init;

@end
