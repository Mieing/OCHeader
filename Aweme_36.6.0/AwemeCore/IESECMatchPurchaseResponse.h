@class NSArray, NSString;

@interface IESECMatchPurchaseResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSArray *matchPurchases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchPurchasesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
