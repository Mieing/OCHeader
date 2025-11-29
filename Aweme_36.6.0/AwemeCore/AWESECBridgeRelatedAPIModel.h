@class NSString, NSArray;

@interface AWESECBridgeRelatedAPIModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *apiToken;
@property (copy, nonatomic) NSString *apiType;
@property (copy, nonatomic) NSArray *dataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
