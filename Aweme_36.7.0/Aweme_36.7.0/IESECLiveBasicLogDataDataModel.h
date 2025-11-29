@class NSDictionary, NSString;

@interface IESECLiveBasicLogDataDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *native;
@property (copy, nonatomic) NSDictionary *order;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
