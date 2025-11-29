@class NSString, NSArray, CJPayPayAndXProtocolShowInfoModel;
@protocol CJPayUIComponentTextModel, CJPayPayAndXShowInfoDetailItemModel;

@interface CJPayPayAndXShowInfoModel : JSONModel

@property (copy, nonatomic) NSString *payAddiTypeStr;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *iconURLStr;
@property (nonatomic) BOOL choose;
@property (copy, nonatomic) NSString *voucherLabel;
@property (copy, nonatomic) NSString *easyRecommendLabelUrlStr;
@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *titleComponentList;
@property (copy, nonatomic) NSArray<CJPayPayAndXShowInfoDetailItemModel> *showInfoDetailList;
@property (retain, nonatomic) CJPayPayAndXProtocolShowInfoModel *protocolShowInfo;
@property (copy, nonatomic) NSString *optionType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isHighRecommendType;
- (BOOL)isEasyRecommendType;
- (void).cxx_destruct;
- (id)trackTitle;

@end
