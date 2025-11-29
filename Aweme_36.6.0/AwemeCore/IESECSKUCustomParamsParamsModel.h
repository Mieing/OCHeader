@class NSDictionary, IESECSKUCustomParamsCpsParamsParamsModel, NSString;

@interface IESECSKUCustomParamsParamsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *adParams;
@property (retain, nonatomic) NSDictionary *boltParam;
@property (retain, nonatomic) IESECSKUCustomParamsCpsParamsParamsModel *cpsParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
