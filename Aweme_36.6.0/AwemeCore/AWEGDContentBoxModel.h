@class NSString, NSArray;

@interface AWEGDContentBoxModel : MTLModel <MTLJSONSerializing, AWEGDComponentWrapperProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *unitText;
@property (copy, nonatomic) NSString *pricePrefixText;
@property (copy, nonatomic) NSString *priceText;
@property (readonly, nonatomic) NSArray *contentVOList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long marginTop;
@property (nonatomic) long long marginBottom;

+ (id)contentVOListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
