@interface IESGurdLazyResourcesManager : NSObject

+ (id)sharedManager;

- (BOOL)isLazyChannel:(id)a0 channel:(id)a1;
- (id)lazyResourceInfoWithAccesskey:(id)a0 channel:(id)a1;
- (BOOL)isLazyResourceWithModel:(id)a0;

@end
