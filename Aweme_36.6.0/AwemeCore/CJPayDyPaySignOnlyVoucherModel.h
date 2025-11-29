@class NSString;

@interface CJPayDyPaySignOnlyVoucherModel : NSObject

@property (nonatomic) BOOL voucherCanUse;
@property (copy, nonatomic) NSString *voucherWorth;
@property (copy, nonatomic) NSString *voucherMeasure;
@property (copy, nonatomic) NSString *reachedAmountDesc;
@property (copy, nonatomic) NSString *voucherLeftDesc;
@property (copy, nonatomic) NSString *voucherTitle;
@property (copy, nonatomic) NSString *voucherDesc;
@property (copy, nonatomic) NSString *voucherTag;
@property (nonatomic) BOOL isNeedCountDown;
@property (nonatomic) BOOL isUseSolidLineVoucherBg;

- (void).cxx_destruct;

@end
