@class NSString, NSDictionary, NSArray;
@protocol CJPayMemAgreementModel;

@interface CJPayBaseGuideInfoModel : JSONModel

@property (nonatomic) BOOL needGuide;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocoList;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSString *voucherAmount;
@property (nonatomic) BOOL isButtonFlick;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)basicDict;

- (void).cxx_destruct;

@end
