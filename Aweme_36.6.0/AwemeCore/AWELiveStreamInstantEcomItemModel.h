@class NSString, NSDictionary;

@interface AWELiveStreamInstantEcomItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productTitle;
@property (copy, nonatomic) NSDictionary *productCover;
@property (copy, nonatomic) NSString *productLink;
@property (nonatomic) BOOL liveTag;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
