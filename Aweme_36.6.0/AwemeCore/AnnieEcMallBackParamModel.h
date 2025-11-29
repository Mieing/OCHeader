@class NSString, AnnieEcMallBackParamsModel;

@interface AnnieEcMallBackParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AnnieEcMallBackParamsModel *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
