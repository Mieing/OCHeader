@class NSString, NSArray;

@interface AWELoginDynamicConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *firstShowPanel;
@property (copy, nonatomic) NSArray *lastLoginContains;
@property (copy, nonatomic) NSArray *loginPriorityList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loginPriorityListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
