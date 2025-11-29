@class NSString, NSArray, CJPayHomePageFoldVoucherInfoModel;
@protocol CJPayPrimaryCombinePayInfoModel;

@interface CJPayDyPayPlusXModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasDiscount;
@property (nonatomic) BOOL choose;
@property (copy, nonatomic) NSString *payAddInfoTypeString;
@property (nonatomic) unsigned long long payAddInfoType;
@property (copy, nonatomic) NSString *rightMsg;
@property (copy, nonatomic) NSString *rightMsgDescPrefix;
@property (copy, nonatomic) NSString *rightMsgDesc;
@property (copy, nonatomic) NSArray *voucherNoList;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSString *standardVoucherLabel;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSArray *voucherMsgList;
@property (copy, nonatomic) NSString *standardRetainVoucherLabel;
@property (copy, nonatomic) NSString *subRightMsgDesc;
@property (copy, nonatomic) NSString *plusXActionTypeString;
@property (nonatomic) unsigned long long plusXActionType;
@property (copy, nonatomic) NSString *plusXActionString;
@property (retain, nonatomic) CJPayHomePageFoldVoucherInfoModel *homePageFoldVoucherInfoModel;
@property (copy, nonatomic) NSArray<CJPayPrimaryCombinePayInfoModel> *primaryPayInfoList;
@property (copy, nonatomic) NSString *backgroundColorStr;
@property (copy, nonatomic) NSString *lynxUrl;
@property (nonatomic) long long lynxLoadWaitTime;
@property (nonatomic) long long displayMode;
@property (copy, nonatomic) NSString *voucherHitType;
@property (copy, nonatomic) NSString *itemLabel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
