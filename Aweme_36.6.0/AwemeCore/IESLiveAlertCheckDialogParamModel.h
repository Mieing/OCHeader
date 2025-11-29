@class NSString;

@interface IESLiveAlertCheckDialogParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *checkButtonText;

- (void).cxx_destruct;

@end
