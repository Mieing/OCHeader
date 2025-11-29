@class NSArray, NSString;

@interface IESECSKUPassThroughItemParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSString *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
