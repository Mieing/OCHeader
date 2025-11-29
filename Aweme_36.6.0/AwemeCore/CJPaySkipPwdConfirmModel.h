@class CJPayBaseVerifyManager, CJPayBDCreateOrderResponse, CJPaySecondaryConfirmInfoModel;

@interface CJPaySkipPwdConfirmModel : NSObject

@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ backCompletionBlock;
@property (copy, nonatomic) id /* block */ checkboxClickBlock;
@property (retain, nonatomic) CJPaySecondaryConfirmInfoModel *confirmInfo;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;

- (void).cxx_destruct;

@end
