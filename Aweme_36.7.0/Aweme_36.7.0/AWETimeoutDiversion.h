@class NSString;

@interface AWETimeoutDiversion : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;
- (BOOL)isWhiteListScene;
- (id)timeoutDiversionWhiteList;
- (BOOL)checkRootVC;
- (BOOL)checkViewHierarchy:(id)a0;
- (BOOL)disableDivertWithView:(id)a0;
- (id)getViewName:(id)a0;

@end
