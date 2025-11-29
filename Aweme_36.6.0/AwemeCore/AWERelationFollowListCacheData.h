@class NSString, NSArray;

@interface AWERelationFollowListCacheData : MTLModel <MTLJSONSerializing>

@property (nonatomic) double cacheTime;
@property (copy, nonatomic) NSString *ownerId;
@property (retain, nonatomic) NSArray *followList;
@property (retain, nonatomic) NSArray *cleanList;
@property (nonatomic) long long groupCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)followListJSONTransformer;
+ (id)cleanListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
