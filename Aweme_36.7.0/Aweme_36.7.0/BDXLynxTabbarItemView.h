@class NSString;

@interface BDXLynxTabbarItemView : LynxUI

@property (retain, nonatomic) NSString *tabTag;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__331;

- (void)tabTag:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
