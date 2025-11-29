@class NSString;

@interface HTSShareActionSystem : NSObject <HTSShareAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)a0;
- (void)shareWithModel:(id)a0 completion:(id /* block */)a1;
- (void)showActivityViewControllerWithShareItems:(id)a0 model:(id)a1 excludedActivityTypes:(id)a2 completion:(id /* block */)a3;

@end
