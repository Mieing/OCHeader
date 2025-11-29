@class NSString, AWEUGActivityAntiMatryoshkaConfigModel;

@interface AWEUGAntiMatryoshkaConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableMatryoshkaCheck;
@property (retain, nonatomic) AWEUGActivityAntiMatryoshkaConfigModel *activityConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
