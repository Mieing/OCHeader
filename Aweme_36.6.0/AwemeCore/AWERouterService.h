@interface AWERouterService : NSObject

+ (id)sharedInstance;

- (void)setSchemeTransformedValidateEnable:(BOOL)a0;
- (void)setSchemeTransformEnable:(BOOL)a0;
- (void)setSchemeValidateEnable:(BOOL)a0;

@end
