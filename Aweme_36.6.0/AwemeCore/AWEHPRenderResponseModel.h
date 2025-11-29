@class NSDictionary, AWEHPBottomTabConfigModel;

@interface AWEHPRenderResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *traceInfo;
@property (retain, nonatomic) AWEHPBottomTabConfigModel *bottomTabConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
