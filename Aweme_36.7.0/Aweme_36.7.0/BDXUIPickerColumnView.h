@class NSArray, NSString;

@interface BDXUIPickerColumnView : LynxUI <BDXPickerColumnViewDelegate>

@property (copy, nonatomic) NSArray *columnValue;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1871;
+ (id)__lynx_prop_config__2012;
+ (id)__lynx_prop_config__2103;

- (void)index:(long long)a0 requestReset:(BOOL)a1;
- (void)onPickerColumnChangedWithResult:(id)a0;
- (void)columnValue:(id)a0 requestReset:(BOOL)a1;
- (void)key:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
