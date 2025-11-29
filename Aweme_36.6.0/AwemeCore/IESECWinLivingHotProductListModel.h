@class NSArray, IESECWinLivingLatestInfoModel, NSString;

@interface IESECWinLivingHotProductListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECWinLivingLatestInfoModel *latestInfo;
@property (retain, nonatomic) NSArray *products;
@property (nonatomic) BOOL isFold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
