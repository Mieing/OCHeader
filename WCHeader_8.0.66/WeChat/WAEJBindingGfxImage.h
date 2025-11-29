@class WAEJTexture;

@interface WAEJBindingGfxImage : WAEJBindingGfxObject {
    WAEJTexture *_externalTexture;
}

- (void)retainEJTexture:(id)a0;
- (void)dealloc;
- (void)destroy;

@end
