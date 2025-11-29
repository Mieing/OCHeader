@class WCPayDecimalKeyboardView, UITextField, NSString;
@protocol IWAPayKeyboardServiceDelegate;

@interface WAPayKeyboardProxy : NSObject <WCPayDecimalKeyboardViewDelegate, IWAPayKeyboardService>

@property (weak, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<IWAPayKeyboardServiceDelegate> delegate;
@property (retain, nonatomic) WCPayDecimalKeyboardView *keyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;

@end
