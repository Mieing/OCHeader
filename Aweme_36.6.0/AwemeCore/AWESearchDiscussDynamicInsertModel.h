@class NSDictionary, NSString;

@interface AWESearchDiscussDynamicInsertModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *renderInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
