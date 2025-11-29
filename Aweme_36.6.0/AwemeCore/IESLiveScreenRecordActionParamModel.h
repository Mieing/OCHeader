@class NSString;

@interface IESLiveScreenRecordActionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *type;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
