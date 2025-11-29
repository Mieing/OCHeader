@class NSString, NSDictionary, CJPayMemBankInfoModel;

@interface CJPayBindCardResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) CJPayMemBankInfoModel *bankCardInfo;
@property (nonatomic) BOOL isSyncUnionCard;
@property (nonatomic) BOOL isLynxBindCard;
@property (nonatomic) BOOL isCancelSetPwd;
@property (copy, nonatomic) NSString *signNo;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *cardBindToken;
@property (copy, nonatomic) NSString *tokenScene;
@property (copy, nonatomic) NSString *failMsg;
@property (copy, nonatomic) NSDictionary *foreignCardExt;
@property (copy, nonatomic) NSString *cvv;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *bindCardExt;
@property (copy, nonatomic) NSString *bankCardId;

- (void).cxx_destruct;

@end
