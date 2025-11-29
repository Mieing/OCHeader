@class NSNumber, NSString;

@interface IESLiveSetElderModeStateDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *result;
@property (copy, nonatomic) NSString *resultMsg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
