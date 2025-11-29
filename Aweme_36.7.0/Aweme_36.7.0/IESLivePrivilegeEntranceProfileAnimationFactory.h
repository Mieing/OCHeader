@interface IESLivePrivilegeEntranceProfileAnimationFactory : NSObject

- (void)playWebpOnView:(id)a0 webpData:(id)a1 completion:(id /* block */)a2;
- (void)playGuideAnimationOn:(id)a0;
- (void)playActiveAnimationOn:(id)a0 activeWebp:(id)a1 changeStateBlock:(id /* block */)a2;
- (void)playWillInactiveGuideAnimationOn:(id)a0;

@end
