@class NSString, CJPayErrorButtonInfo, CJPayMemBankInfoModel;

@interface CJPaySignSMSResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *signNo;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *pwdToken;
@property (copy, nonatomic) CJPayMemBankInfoModel *cardInfoModel;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
