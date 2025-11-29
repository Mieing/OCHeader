@class NSString;

@interface IESECCartMarketingResourceResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSString *couponSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
