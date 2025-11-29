@class NSString, NSArray;

@interface AWEGrouponChannelCacheModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *checkParams;
@property (copy, nonatomic) NSString *rawData;
@property (nonatomic) double visitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithChannel:(id)a0 bundle:(id)a1 schema:(id)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
