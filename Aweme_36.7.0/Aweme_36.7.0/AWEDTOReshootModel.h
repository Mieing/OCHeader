@class NSArray, AWEDTOClipRangeEntry, NSString;

@interface AWEDTOReshootModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *fragments;
@property (retain, nonatomic) AWEDTOClipRangeEntry *clipRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clipRangeJSONTransformer;
+ (id)fragmentsJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
