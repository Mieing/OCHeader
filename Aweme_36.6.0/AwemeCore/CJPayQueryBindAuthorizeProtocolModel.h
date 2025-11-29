@class NSArray, NSString, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPayQueryBindAuthorizeProtocolModel : JSONModel

@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSString *protocolCheckBox;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSString *tailGuideMessage;

+ (id)keyMapper;

- (BOOL)propertyIsOptional:(id)a0;
- (void).cxx_destruct;

@end
