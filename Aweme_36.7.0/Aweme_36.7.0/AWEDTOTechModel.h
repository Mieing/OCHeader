@class NSString;

@interface AWEDTOTechModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *techData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
