@class NSString;

@interface IESECSKUOrderComponent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *orderURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
