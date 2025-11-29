@class NSString;

@interface AWEIMShareLiveMessageCardProductInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long showDetails;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *productId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithProductInfo:(id)a0;
- (void).cxx_destruct;

@end
