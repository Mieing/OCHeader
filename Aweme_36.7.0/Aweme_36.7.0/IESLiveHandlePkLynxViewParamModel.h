@class NSNumber, NSArray;

@interface IESLiveHandlePkLynxViewParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSArray *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
