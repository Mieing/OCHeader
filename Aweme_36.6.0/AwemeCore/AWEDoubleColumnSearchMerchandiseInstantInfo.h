@class NSString;

@interface AWEDoubleColumnSearchMerchandiseInstantInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *instantAddress;
@property (copy, nonatomic) NSString *addressSource;
@property (copy, nonatomic) NSString *cartSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
