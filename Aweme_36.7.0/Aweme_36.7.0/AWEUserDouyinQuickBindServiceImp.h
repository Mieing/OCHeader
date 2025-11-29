@class NSString;

@interface AWEUserDouyinQuickBindServiceImp : HTSService <AWEUserQuickBindService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBind:(unsigned long long)a0;

- (BOOL)isShowingLoginWindow;
- (id)quickBindViewControllerWithPlatform:(unsigned long long)a0 useType:(unsigned long long)a1 enterFrom:(id)a2 clientKey:(id)a3 trackParams:(id)a4 didCancelBindBlock:(id /* block */)a5 didFinishBindBlock:(id /* block */)a6;
- (id)quickBindViewControllerWithPlatform:(unsigned long long)a0 useType:(unsigned long long)a1 enterFrom:(id)a2 clientKey:(id)a3 didCancelBindBlock:(id /* block */)a4 didFinishBindBlock:(id /* block */)a5;
- (void)showBindSafeMobileViewController:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (BOOL)enableQuickBindForHalfScreen:(unsigned long long)a0;
- (id)getLastLoginUser;
- (id)getLastLoginUserDictionary;
- (id)getVisibleLoginWindow;

@end
