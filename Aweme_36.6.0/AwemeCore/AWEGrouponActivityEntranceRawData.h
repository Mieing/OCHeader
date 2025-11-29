@class NSString, AWEGrouponActivityEntranceDynamicImageModel, NSArray, NSDictionary, AWEURLModel;

@interface AWEGrouponActivityEntranceRawData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entranceName;
@property (retain, nonatomic) AWEURLModel *staticImage;
@property (nonatomic) long long useDynamic;
@property (retain, nonatomic) AWEGrouponActivityEntranceDynamicImageModel *dynamic;
@property (nonatomic) double entranceRemoveTime;
@property (copy, nonatomic) NSArray *freqRuleConfig;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)freqRuleConfigJSONTransformer;

- (void).cxx_destruct;

@end
