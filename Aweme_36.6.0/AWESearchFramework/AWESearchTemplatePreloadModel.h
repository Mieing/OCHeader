@class NSString;

@interface AWESearchTemplatePreloadModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priority;
@property (nonatomic) long long strategy;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
