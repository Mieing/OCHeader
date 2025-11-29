@class WAEJTexture;

@interface WAEJBindingWebGLTexture : WAEJBindingWebGLObject {
    WAEJTexture *texture;
}

+ (id)textureFromJSValue:(struct OpaqueJSValue { } *)a0;
+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 webglContext:(id)a2;
+ (struct OpaqueJSValue { } *)createJSObjectWithTexture:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 texture:(id)a2;
+ (void)modifyWebGLTexture:(struct OpaqueJSValue { } *)a0 glTexture:(unsigned int)a1 target:(unsigned int)a2;
+ (id)getEGLContext:(struct OpaqueJSValue { } *)a0;

- (id)initWithWebGLContext:(id)a0;
- (id)initWithTexture:(id)a0;
- (void)invalidate;
- (id)getTexture;
- (struct OpaqueJSValue { } *)getJSObject;

@end
