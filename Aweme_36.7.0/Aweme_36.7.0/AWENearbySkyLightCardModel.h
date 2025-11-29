@class NSString, NSArray;

@interface AWENearbySkyLightCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *skyLightTitle;
@property (retain, nonatomic) NSArray *lifeServiceEntries;
@property (retain, nonatomic) NSArray *poiCollectList;
@property (retain, nonatomic) NSArray *poiRecomendList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lifeServiceEntriesJSONTransformer;
+ (id)poiCollectListJSONTransformer;
+ (id)poiRecomendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
