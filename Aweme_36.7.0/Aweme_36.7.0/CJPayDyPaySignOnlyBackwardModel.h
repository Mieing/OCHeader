@class NSArray, NSString, NSURL, CJPayCommonProtocolModel;

@interface CJPayDyPaySignOnlyBackwardModel : NSObject

@property (nonatomic) long long signOnlyBackwardType;
@property (nonatomic) BOOL isNeedHideBackBtn;
@property (retain, nonatomic) NSURL *titleImageURL;
@property (nonatomic) long long countDownTime;
@property (copy, nonatomic) NSArray *voucherListModels;
@property (copy, nonatomic) NSString *backButtonStr;
@property (copy, nonatomic) NSString *confirmButtonStr;
@property (nonatomic) BOOL isNeedHideTopLeftBackButton;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (copy, nonatomic) id /* block */ clickTopLeftBackBtn;
@property (copy, nonatomic) id /* block */ clickBackBtn;
@property (copy, nonatomic) id /* block */ clickConfirmBtn;
@property (copy, nonatomic) id /* block */ timeoutBlock;
@property (copy, nonatomic) id /* block */ clickProtocol;
@property (copy, nonatomic) id /* block */ checkBoxClickBlock;
@property (nonatomic) BOOL clickConfirmCloseSelf;
@property (copy, nonatomic) NSArray *activityLabel;

- (id)initWithResponse:(id)a0 backwardType:(long long)a1;
- (void)updateVoucherCanUse:(BOOL)a0;
- (void).cxx_destruct;

@end
