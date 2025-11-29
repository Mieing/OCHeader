@class NSString;

@interface IESECRelationActivityDynamicComponentShowRule : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long period;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
