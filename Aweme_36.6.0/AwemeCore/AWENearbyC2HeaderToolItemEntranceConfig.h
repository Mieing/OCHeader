@class NSString, AWEURLModel;

@interface AWENearbyC2HeaderToolItemEntranceConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *imageMode;
@property (retain, nonatomic) AWEURLModel *imageURLItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)imageURLItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
