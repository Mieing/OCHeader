@class NSString, NSDictionary, NSArray;
@protocol CJPayMemAgreementModel;

@interface CJPayFunctionGuidanceMaterial : JSONModel <CJPayCommonProtocolModelBuildProtocol>

@property (nonatomic) BOOL isChecked;
@property (nonatomic) BOOL isShowButton;
@property (copy, nonatomic) NSString *onButtonText;
@property (copy, nonatomic) NSString *offButtonText;
@property (copy, nonatomic) NSString *guideDesc;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocolList;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildCommonProtocolModel;
- (void).cxx_destruct;

@end
