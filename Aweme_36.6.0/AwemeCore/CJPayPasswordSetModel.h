@class NSString, NSArray, CJPayProcessInfo, CJPayMemBankInfoModel;

@interface CJPayPasswordSetModel : NSObject

@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) id /* block */ backCompletion;
@property (copy, nonatomic) id /* block */ backFirstStepCompletion;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *smchID;
@property (nonatomic) BOOL isNeedCardInfo;
@property (copy, nonatomic) NSString *mobile;
@property (retain, nonatomic) CJPayMemBankInfoModel *bankCardInfo;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (nonatomic) BOOL isSetAndPay;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSArray *activityInfos;
@property (nonatomic) BOOL isUnionBindCard;

- (void).cxx_destruct;

@end
