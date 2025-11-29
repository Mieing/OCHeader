@class IESECSKUViewConfigModel, NSArray, NSDictionary, NSString;

@interface IESECSKUFloatBannerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECSKUViewConfigModel *background;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSDictionary *showEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
