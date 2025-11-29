@class NSArray, NSString, AWEURLModel;

@interface AWEPOIItemAnchorTransformModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
