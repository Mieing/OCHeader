@class AWEGDServerUgcRateItem, NSString;

@interface AWEGDRateItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long item_type;
@property (retain, nonatomic) AWEGDServerUgcRateItem *ugc_item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)item_typeJSONTransformer;
+ (id)ugc_itemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)parseToContentViewModel;
- (void).cxx_destruct;

@end
