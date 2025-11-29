@class NSArray, NSString, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPayMemProtocolListResponse : CJPayBaseResponse

@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSString *protocolCheckBox;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
