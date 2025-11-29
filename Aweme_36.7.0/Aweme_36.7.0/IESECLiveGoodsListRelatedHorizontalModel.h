@class NSArray, IESECLiveGoodsListRelatedHeaderModel, NSDictionary, NSString;

@interface IESECLiveGoodsListRelatedHorizontalModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsListRelatedHeaderModel *header;
@property (retain, nonatomic) NSArray *promotions;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promotionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
