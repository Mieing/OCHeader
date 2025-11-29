@class NSString;

@interface AWEAIMemoriesMobModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aiEntrance;
@property (copy, nonatomic) NSString *clusterTypeFirstLevel;
@property (copy, nonatomic) NSString *clusterTypeSecondLevel;
@property (copy, nonatomic) NSString *recommendMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
