@class NSArray, NSString;

@interface AWENearbyLifeInsertForwardCardData : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableGrouponGuideCards;
@property (copy, nonatomic) NSArray *exposeCardConf;
@property (copy, nonatomic) NSString *rawDataJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)exposeCardConfJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)rawData;

@end
