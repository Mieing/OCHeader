@class NSDictionary, NSArray, NSString;

@interface IESECTabKitTrackConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSArray *showEvents;
@property (copy, nonatomic) NSArray *clickEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showEventsJSONTransformer;
+ (id)clickEventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
