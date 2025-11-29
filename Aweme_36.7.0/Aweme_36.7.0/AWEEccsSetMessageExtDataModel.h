@class NSString;

@interface AWEEccsSetMessageExtDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *msg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
