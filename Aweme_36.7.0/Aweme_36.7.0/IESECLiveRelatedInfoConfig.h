@class NSString, IESECLiveRelatedInfoSupportConfig;

@interface IESECLiveRelatedInfoConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) IESECLiveRelatedInfoSupportConfig *supportConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
