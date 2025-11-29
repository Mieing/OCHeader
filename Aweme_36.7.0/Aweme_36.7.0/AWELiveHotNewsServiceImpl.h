@class NSString;

@interface AWELiveHotNewsServiceImpl : NSObject <IESLiveHotNewsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableLiveHotNews;
- (void)showHotNewsControllerWithParentController:(id)a0 withTitle:(id)a1 previousPage:(id)a2 currentPage:(id)a3 cellEnableClick:(BOOL)a4 beforeJumpBlock:(id /* block */)a5 dismissBlock:(id /* block */)a6 completeBlock:(id /* block */)a7;
- (void)showHotNewsControllerWithParentController:(id)a0 withTitle:(id)a1 previousPage:(id)a2 currentPage:(id)a3 cellEnableClick:(BOOL)a4 beforeJumpBlock:(id /* block */)a5 dismissBlock:(id /* block */)a6 completeBlock:(id /* block */)a7 extraDict:(id)a8;

@end
