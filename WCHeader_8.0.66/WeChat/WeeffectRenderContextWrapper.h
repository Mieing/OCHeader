@class CdnRenderContextWrapper, VisEffectRenderContextWrapper;

@interface WeeffectRenderContextWrapper : NSObject

@property long long renderType;
@property (retain) VisEffectRenderContextWrapper *visContextWrapper;
@property (retain) CdnRenderContextWrapper *cdnContextWrapper;

- (id)initWithVisContext:(id)a0;
- (id)initWithCdnContext:(id)a0;
- (void).cxx_destruct;

@end
