@class AdInnovationComponentDataModel, NSString, NSDictionary, AdInnovationResourceDataModel;

@interface AdInnovationModel : NSObject <BDModelCustom>

@property (retain, nonatomic) AdInnovationResourceDataModel *resource;
@property (retain, nonatomic) AdInnovationComponentDataModel *component;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
