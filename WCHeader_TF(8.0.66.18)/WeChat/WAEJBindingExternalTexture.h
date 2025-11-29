@class NSString, WAEJTexture;

@interface WAEJBindingExternalTexture : WAEJBindingBase <EJDrawable>

@property (retain, nonatomic) WAEJTexture *texture;
@property (readonly, nonatomic) int viewId;
@property (readonly, nonatomic) NSString *type;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)dealloc;
- (void)updateTextureIfNeeded;

@end
