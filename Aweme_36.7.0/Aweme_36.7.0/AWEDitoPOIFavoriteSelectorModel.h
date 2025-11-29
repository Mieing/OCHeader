@class NSString, NSArray;

@interface AWEDitoPOIFavoriteSelectorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *selectorType;
@property (copy, nonatomic) NSString *selectorTypeV2;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL locationPerm;
@property (copy, nonatomic) NSArray *nextList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nextListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
