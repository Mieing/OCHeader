@class NSString, CJPaySafeInputViewStyleModel;

@interface CJPayPasswordInputStyleModel : NSObject

@property (retain, nonatomic) CJPaySafeInputViewStyleModel *inputViewModel;
@property (nonatomic) double inputItemWidth;
@property (nonatomic) double inputViewWidth;
@property (nonatomic) long long originErrorStatus;
@property (copy, nonatomic) NSString *originErrorText;
@property (copy, nonatomic) NSString *originErrorIcon;
@property (nonatomic) BOOL ignoreForgetBtn;
@property (nonatomic) BOOL hideForgetBtn;

- (id)initWithDefaultStyle;
- (double)p_getPasswordItemWidth;
- (double)p_getPasswordItemSpace;
- (id)p_createInputViewModel;
- (double)p_inputPasswordViewWidth;
- (void)p_setupDefaultStyle;
- (void).cxx_destruct;

@end
