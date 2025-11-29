@class NSDictionary, NSString;

@interface IESECWinProductRefreshTagListMapModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *tagListMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagListMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
