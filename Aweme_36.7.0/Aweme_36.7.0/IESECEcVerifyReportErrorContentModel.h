@class NSString, NSArray;

@interface IESECEcVerifyReportErrorContentModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *errorEvent;
@property (copy, nonatomic) NSArray *errorList;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
