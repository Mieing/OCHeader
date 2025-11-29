@class HTSLivePaymentArea_PayButton, NSMutableArray, HTSLivePaymentArea_AdditionalButton;

@interface HTSLivePaymentArea : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePaymentArea_PayButton *payButton;
@property (nonatomic) BOOL hasPayButton;
@property (retain, nonatomic) HTSLivePaymentArea_AdditionalButton *additionalButton;
@property (nonatomic) BOOL hasAdditionalButton;
@property (retain, nonatomic) NSMutableArray *payButtonListArray;
@property (readonly, nonatomic) unsigned long long payButtonListArray_Count;

+ (id)descriptor;

@end
