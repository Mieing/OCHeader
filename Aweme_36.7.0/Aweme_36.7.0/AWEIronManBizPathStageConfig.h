@class NSString, NSDictionary, NSArray;

@interface AWEIronManBizPathStageConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *matchParams;
@property (copy, nonatomic) NSArray *indexParams;
@property (copy, nonatomic) NSArray *getParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
