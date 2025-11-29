@class NSString;

@interface BDXUIPickerView : LynxUI

@property (copy, nonatomic) NSString *indicatorStyle;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__721;

- (void)layoutDidFinished;
- (void)indicatorStyle:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
