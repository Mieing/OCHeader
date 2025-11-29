@class NSString;

@interface AWEAwemeToolBarModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) int followedCount;
@property (retain, nonatomic) NSString *followedShotInfo;
@property (retain, nonatomic) NSString *followedShotSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
