@class NSArray, NSString;

@interface IESECWinSkuInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canSwitch;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *sceneTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
