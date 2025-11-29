@class NSString;

@interface IESECLiveLogParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *log;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
