@class NSArray, NSString;

@interface IESECWinSyncProductModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *products;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
