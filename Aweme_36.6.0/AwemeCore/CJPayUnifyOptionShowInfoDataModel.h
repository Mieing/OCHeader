@class NSString, NSArray, CJPayUnifyOptionShowInfoExtInfoModel;
@protocol CJPayHomePageVoucherMsgInfoModel, CJPayStandardTagModel, CJPayToastMsgInfo;

@interface CJPayUnifyOptionShowInfoDataModel : JSONModel

@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSArray<CJPayHomePageVoucherMsgInfoModel> *standardVoucherMsgList;
@property (copy, nonatomic) NSArray<CJPayStandardTagModel> *voucherList;
@property (copy, nonatomic) NSString *toCombineAssetAmountDesc;
@property (copy, nonatomic) NSString *originAssetAmountDesc;
@property (copy, nonatomic) NSArray *weakContractVoucherInfo;
@property (copy, nonatomic) NSArray<CJPayStandardTagModel> *recommendVoucherTagList;
@property (retain, nonatomic) CJPayUnifyOptionShowInfoExtInfoModel *showInfoExtInfoModel;
@property (copy, nonatomic) NSArray<CJPayToastMsgInfo> *toastMsgInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
