@class NSString, NSArray, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPayUnionBindCardAuthorizationResponse : CJPayBaseResponse

@property (retain, nonatomic) NSString *authorizationIconUrl;
@property (retain, nonatomic) NSString *nameMask;
@property (retain, nonatomic) NSString *idCodeMask;
@property (retain, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (retain, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
