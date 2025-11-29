@class NSArray, NSString;

@interface AWENearbyTaskConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *blockTaskList;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tasksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
