@interface CJPayNewIAPConfirmModel : CJPayNewIAPBaseResponseModel

@property (nonatomic) BOOL finishTransaction;
@property (nonatomic) BOOL shouldToastFailureMsg;
@property (nonatomic) long long offerType;

@end
