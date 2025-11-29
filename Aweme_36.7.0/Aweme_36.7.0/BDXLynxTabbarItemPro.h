@class NSString;

@interface BDXLynxTabbarItemPro : LynxUI

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSString *tabTag;
@property (copy, nonatomic) id /* block */ selectedBlock;

+ (id)__lynx_prop_config__471;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__542;

- (void)select:(BOOL)a0 requestReset:(BOOL)a1;
- (void)tabTag:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)createView;

@end
