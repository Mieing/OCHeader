@class NSDictionary, NSArray, NSString;

@interface AWESiriTopHitConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) BOOL enableAppIntent;
@property (nonatomic) BOOL enableDynamicAppIntent;
@property (nonatomic) unsigned long long appShortcutOptimizeStrategy;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSArray *units;
@property (copy, nonatomic) NSArray *rawData;
@property (nonatomic) long long appShortcutConfigDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unitsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)extraDataJSONTransformer;

- (void).cxx_destruct;

@end
