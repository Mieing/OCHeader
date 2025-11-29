@class NSString;

@interface IESECGoodsGroupBuyerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) double buyTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
