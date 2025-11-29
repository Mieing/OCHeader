@class NSString, NSNumber, NSDictionary;

@interface IESLiveUploadTraceMonitorParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *product;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *traceName;
@property (copy, nonatomic) NSString *step;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSDictionary *index;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
