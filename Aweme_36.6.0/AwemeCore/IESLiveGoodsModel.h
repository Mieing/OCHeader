@class NSString, NSURL;

@interface IESLiveGoodsModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *goodsID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortTitle;
@property (retain, nonatomic) NSURL *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
