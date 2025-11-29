@class NSArray, NSString;

@interface AWEDitoPOIFavoriteLabelsDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *shortcutData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortcutDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
