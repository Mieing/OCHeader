@class NSArray, NSString;

@interface IESLLGDGrouponDetailActionInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *click;
@property (copy, nonatomic) NSArray *expose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clickJSONTransformer;
+ (id)exposeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
