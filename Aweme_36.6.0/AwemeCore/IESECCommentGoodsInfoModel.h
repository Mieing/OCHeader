@class IESECURLModel, NSString, IESECGoodsPrice, NSNumber;

@interface IESECCommentGoodsInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (copy, nonatomic) NSString *statusText;
@property (copy, nonatomic) NSNumber *goodRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
