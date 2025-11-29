@class NSString, NSDictionary;

@interface BDLynxUIATag : LynxUI

@property (readonly, copy, nonatomic) NSString *href;
@property (readonly, copy, nonatomic) NSString *paramsString;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long index;

+ (id)__lynx_prop_config__695;
+ (id)__lynx_prop_config__440;
+ (id)__lynx_prop_config__491;
+ (id)__lynx_prop_config__542;
+ (id)__lynx_prop_config__593;
+ (id)__lynx_prop_config__644;

- (void)openHref;
- (void)setHref:(id)a0 requestReset:(BOOL)a1;
- (void)setParamsString:(id)a0 requestReset:(BOOL)a1;
- (void)setParams:(id)a0 requestReset:(BOOL)a1;
- (void)setLabel:(id)a0 requestReset:(BOOL)a1;
- (void)setIdentifier:(id)a0 requestReset:(BOOL)a1;
- (void)setIndex:(long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
