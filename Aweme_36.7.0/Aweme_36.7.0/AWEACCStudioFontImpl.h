@class NSString;

@interface AWEACCStudioFontImpl : NSObject <ACCCustomFontProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fontWithModel:(id)a0 size:(double)a1;
- (id)stickerFonts;
- (id)handleWithFontEffects:(id)a0;
- (void)downloadFontWithModel:(id)a0 completion:(id /* block */)a1;
- (void)downloadFontWithModelWithHighPriority:(id)a0 completion:(id /* block */)a1;
- (void)prefetchFontEffects;
- (void)forcePrefetchFontEffects;
- (void)prefetchFontEffectsWithCompletion:(id /* block */)a0;
- (id)fontModelForName:(id)a0;
- (id)fontFilePath:(id)a0;

@end
