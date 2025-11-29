@interface AWEPlayInteractionTC21RPStickerController : AWEPlayInteractionBaseController

- (void)p_prepareForDisplay;
- (void)cleanCacheIfNeeded;
- (void)getRPVideoTrackInfoIfNeeded;
- (id)p_redPacketStickerFoler;
- (BOOL)searchFileInCacheDirectory:(id)a0;
- (void)handleNetData:(id)a0;
- (id)createDirectoryIfNeeded;

@end
