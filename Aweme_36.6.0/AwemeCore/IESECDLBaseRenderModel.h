@class NSString, NSDictionary;

@interface IESECDLBaseRenderModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *visibility;
@property (copy, nonatomic) NSDictionary *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
