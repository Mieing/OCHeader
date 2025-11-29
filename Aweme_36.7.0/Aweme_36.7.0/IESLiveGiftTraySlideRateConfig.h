@class NSNumber, NSArray, NSString;

@interface IESLiveGiftTraySlideRateConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSArray *hotConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hotConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
