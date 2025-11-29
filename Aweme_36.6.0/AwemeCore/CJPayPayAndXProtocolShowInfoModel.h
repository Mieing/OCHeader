@class NSString, NSArray, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPayPayAndXProtocolShowInfoModel : JSONModel

@property (copy, nonatomic) NSString *protocolInfoStr;
@property (copy, nonatomic) NSString *protocolGroupNamesStr;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocolInfo;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
