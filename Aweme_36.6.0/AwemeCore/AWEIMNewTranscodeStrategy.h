@interface AWEIMNewTranscodeStrategy : AWEIMBaseTranscodeStrategy

- (double)p_remuxBitrateLimit;
- (BOOL)p_getForceTranscodeWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)transAVAsset:(id)a0 processCallback:(id /* block */)a1 dataCallback:(id /* block */)a2 complete:(id /* block */)a3;
- (double)remuxSizeHeightLimit;
- (double)remuxSizeWidthLimit;
- (id)p_getNormalVideoQualitySetting;

@end
