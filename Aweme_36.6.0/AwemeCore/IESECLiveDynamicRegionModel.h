@class NSString;

@interface IESECLiveDynamicRegionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long dynamicType;
@property (retain, nonatomic) NSString *templateURL;
@property (nonatomic) long long regionBusinessType;
@property (retain, nonatomic) NSString *regionParams;
@property (retain, nonatomic) NSString *regionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
