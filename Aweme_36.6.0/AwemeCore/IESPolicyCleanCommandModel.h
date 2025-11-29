@class NSString, NSArray;

@interface IESPolicyCleanCommandModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *strategy;
@property (copy, nonatomic) NSString *timeThreshold;
@property (copy, nonatomic) NSArray *deleteKeys;
@property (copy, nonatomic) NSArray *allowKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
