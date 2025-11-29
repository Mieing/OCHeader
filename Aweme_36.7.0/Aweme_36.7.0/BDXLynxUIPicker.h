@class UIColor, NSString, NSArray, BDXPickerSource;

@interface BDXLynxUIPicker : LynxUI <BDXPickerSheetViewDelegate>

@property (retain) NSString *mode;
@property (retain) NSArray *range;
@property (retain) id rangeKey;
@property (retain) id value;
@property (retain) NSString *start;
@property (retain) NSString *end;
@property (retain) NSString *fields;
@property (retain) NSString *separator;
@property (retain) UIColor *cancelColor;
@property (retain) UIColor *confirmColor;
@property (retain) NSString *title;
@property (retain) UIColor *titleColor;
@property double titleFontSize;
@property (retain) NSString *cancelString;
@property (retain) NSString *confirmString;
@property (retain) BDXPickerSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__16213;
+ (id)__lynx_prop_config__661;
+ (id)__lynx_prop_config__945;
+ (id)__lynx_prop_config__742;
+ (id)__lynx_prop_config__783;
+ (id)__lynx_prop_config__864;
+ (id)__lynx_prop_config__1066;
+ (id)__lynx_prop_config__1147;
+ (id)__lynx_prop_config__1228;
+ (id)__lynx_prop_config__1309;
+ (id)__lynx_prop_config__13810;
+ (id)__lynx_prop_config__14611;
+ (id)__lynx_prop_config__15412;
+ (id)__lynx_prop_config__17014;
+ (id)__lynx_prop_config__17815;
+ (id)__lynx_prop_config__18616;

- (void)title:(id)a0 requestReset:(BOOL)a1;
- (void)mode:(id)a0 requestReset:(BOOL)a1;
- (void)onPickerSheetChanged:(id)a0 withResult:(id)a1;
- (void)onPickerSheetCancel:(id)a0 withResult:(id)a1;
- (void)onPickerSheetConfirm:(id)a0 withResult:(id)a1;
- (void)disabled:(BOOL)a0 requestReset:(BOOL)a1;
- (void)range:(id)a0 requestReset:(BOOL)a1;
- (void)rangeKey:(id)a0 requestReset:(BOOL)a1;
- (void)value:(id)a0 requestReset:(BOOL)a1;
- (void)start:(id)a0 requestReset:(BOOL)a1;
- (void)end:(id)a0 requestReset:(BOOL)a1;
- (void)fields:(id)a0 requestReset:(BOOL)a1;
- (void)separator:(id)a0 requestReset:(BOOL)a1;
- (void)cancelString:(id)a0 requestReset:(BOOL)a1;
- (void)confirmString:(id)a0 requestReset:(BOOL)a1;
- (void)cancelColor:(id)a0 requestReset:(BOOL)a1;
- (void)confirmColor:(id)a0 requestReset:(BOOL)a1;
- (void)titleColor:(id)a0 requestReset:(BOOL)a1;
- (void)titleFontSize:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)show;
- (id)createView;

@end
