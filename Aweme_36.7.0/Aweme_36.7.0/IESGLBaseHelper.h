@interface IESGLBaseHelper : NSObject

+ (void)draw:(id)a0 textures:(id)a1 vertices:(const float *)a2 shouldClear:(BOOL)a3 outputFramebuffer:(id)a4;
+ (void)draw:(id)a0 shouldClear:(BOOL)a1 waitFinish:(BOOL)a2 inputFramebuffer:(id)a3 outputFramebuffer:(id)a4;
+ (void)draw:(id)a0 shouldClear:(BOOL)a1 inputFramebuffer:(id)a2 outputFramebuffer:(id)a3;
+ (unsigned int)gLFactorFromVEBlendFactor:(long long)a0;
+ (void)draw:(id)a0 textures:(id)a1 vertices:(const float *)a2 shouldClear:(BOOL)a3 waitFinish:(BOOL)a4 outputFramebuffer:(id)a5;

@end
