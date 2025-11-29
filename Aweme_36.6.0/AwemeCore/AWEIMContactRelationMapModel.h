@class NSArray, NSString;

@interface AWEIMContactRelationMapModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long nextUpdateTimestamp;
@property (nonatomic) BOOL needUpdate;
@property (copy, nonatomic) NSArray *communityMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)communityMapsJSONTransformer;
+ (id)needUpdateMapsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
