@class NSString, CJPayKeyboardContainerModel;

@interface CJPayLynxUIKeyboard : LynxUI <CJPayKeyboardContainerDelegate>

@property (retain, nonatomic) CJPayKeyboardContainerModel *model;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *theme;
@property (nonatomic) BOOL showX;
@property (nonatomic) BOOL enableInput;
@property (nonatomic) BOOL enableDelete;
@property (nonatomic) BOOL enableConfirm;
@property (nonatomic) BOOL enableToprightbtntap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1142;
+ (id)__lynx_prop_config__1193;
+ (id)__lynx_prop_config__1324;
+ (id)__lynx_prop_config__1475;
+ (id)__lynx_prop_config__1716;
+ (id)__lynx_prop_config__1897;

- (void)eventDidSet;
- (void)keyboardDeleteStr;
- (void)keyboardInputStr:(id)a0;
- (void)keyboardInputCompleted;
- (void)keyboardClickTopRightBtn;
- (id)keyboardConfigModelWithType:(unsigned long long)a0;
- (void)layoutShadowNode;
- (void)confirmText:(id)a0 requestReset:(BOOL)a1;
- (void)showX:(BOOL)a0 requestReset:(BOOL)a1;
- (void)watermark:(id)a0 requestReset:(BOOL)a1;
- (void)topRightButtonText:(id)a0 requestReset:(BOOL)a1;
- (void)type:(id)a0 requestReset:(BOOL)a1;
- (void)theme:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)createView;

@end
