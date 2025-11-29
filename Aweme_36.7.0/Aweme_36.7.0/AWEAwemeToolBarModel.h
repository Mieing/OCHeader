@class NSString;

@interface AWEAwemeToolBarModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) int followedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
