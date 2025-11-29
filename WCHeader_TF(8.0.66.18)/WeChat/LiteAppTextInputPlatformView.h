@class NSString, UIView;

@interface LiteAppTextInputPlatformView : NSObject <FlutterPlatformView>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(id)a0 data:(id)a1;
- (void)setupLiteAppKeyboardPay:(id)a0 type:(long long)a1;
- (void)setupLiteAppKeyboardDefault:(id)a0 json:(id)a1;
- (void)setupLiteAppKeyboardSafePassword:(id)a0;
- (long long)getLiteAppSafePasswordKeyboardPwdViewStyle:(id)a0;
- (void).cxx_destruct;

@end
