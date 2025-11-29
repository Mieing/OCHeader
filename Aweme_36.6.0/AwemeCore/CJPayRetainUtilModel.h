@class CJPayRetainInfoV2Config, NSString, CJPayBDRetainInfoModel, NSDictionary, UIViewController;
@protocol CJPayTrackerProtocol;

@interface CJPayRetainUtilModel : NSObject

@property (retain, nonatomic) CJPayBDRetainInfoModel *retainInfo;
@property (retain, nonatomic) CJPayRetainInfoV2Config *retainInfoV2Config;
@property (copy, nonatomic) NSDictionary *retainBatchInfoDict;
@property (copy, nonatomic) NSString *intergratedTradeNo;
@property (copy, nonatomic) NSDictionary *processInfoDic;
@property (copy, nonatomic) NSString *intergratedMerchantID;
@property (nonatomic) BOOL isHasVoucher;
@property (nonatomic) unsigned long long positionType;
@property (nonatomic) BOOL isBonusPath;
@property (nonatomic) BOOL isTransform;
@property (nonatomic) BOOL isUseClearBGColor;
@property (nonatomic) BOOL notSumbitServerEvent;
@property (nonatomic) BOOL hasInputHistory;
@property (nonatomic) BOOL isOnlyShowNormalRetainStyle;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ otherVerifyActionBlock;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ lynxRetainActionBlock;
@property (readonly, nonatomic) unsigned long long retainType;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (copy, nonatomic) NSString *eventNameForPopUpClick;
@property (copy, nonatomic) NSString *eventNameForPopUpShow;
@property (copy, nonatomic) NSDictionary *extraParamForConfirm;
@property (copy, nonatomic) NSDictionary *extraParamForOtherVerify;
@property (copy, nonatomic) NSDictionary *extraParamForClose;
@property (copy, nonatomic) NSDictionary *extraParamForPopUpShow;
@property (copy, nonatomic) id /* block */ continuePayBlock;
@property (copy, nonatomic) id /* block */ selectPayTypeBlock;
@property (copy, nonatomic) id /* block */ cancelPayBlock;
@property (copy, nonatomic) id /* block */ closePayBlock;
@property (weak, nonatomic) UIViewController *sourceVC;

+ (unsigned long long)recommendChannelType:(id)a0;

- (void)buildTrackEventNormalSetting;
- (void).cxx_destruct;

@end
