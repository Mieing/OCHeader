@class NSString;

@interface IESECSKUTextHighLightModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;
@property (copy, nonatomic) NSString *highLightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
