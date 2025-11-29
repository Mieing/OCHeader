@class NSDictionary, NSString;

@interface AWEPOIPublishSelectedAnchorData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *poi;
@property (copy, nonatomic) NSDictionary *product;
@property (copy, nonatomic) NSDictionary *task;
@property (copy, nonatomic) NSString *creationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
