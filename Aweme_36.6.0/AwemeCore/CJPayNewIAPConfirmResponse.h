@interface CJPayNewIAPConfirmResponse : CJPayBaseResponse

@property (nonatomic) BOOL finishTransaction;
@property (nonatomic) BOOL shouldToastFailureMsg;
@property (nonatomic) long long offerType;

+ (id)keyMapper;

- (id)toNewIAPConfirmModel;

@end
