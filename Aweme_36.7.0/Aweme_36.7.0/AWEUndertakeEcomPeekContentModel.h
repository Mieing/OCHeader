@class NSString, NSArray, NSDictionary;

@interface AWEUndertakeEcomPeekContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupSchema;
@property (copy, nonatomic) NSArray *couponInfoList;
@property (copy, nonatomic) NSString *venueSchema;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
