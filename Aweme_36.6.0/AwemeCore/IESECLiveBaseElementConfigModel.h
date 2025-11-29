@class NSArray, NSString;

@interface IESECLiveBaseElementConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
