@class NSString, NSArray, NSNumber;

@interface IESECInnerFlowProductBaseInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *images;
@property (retain, nonatomic) NSNumber *showSKUID;
@property (nonatomic) long long status;
@property (nonatomic) BOOL soldOut;
@property (copy, nonatomic) NSString *promotionID;
@property (nonatomic) long long promotionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productIDJSONTransformer;
+ (id)promotionIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
