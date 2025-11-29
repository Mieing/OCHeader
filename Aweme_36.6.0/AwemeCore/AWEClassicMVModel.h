@class NSString, AWEUserModel;

@interface AWEClassicMVModel : IESEffectModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long usageAmount;
@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) AWEUserModel *author;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
