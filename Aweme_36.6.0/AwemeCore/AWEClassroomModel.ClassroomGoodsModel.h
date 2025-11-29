@class NSString, NSArray, _TtC17AWEClassroomModel31ClassroomGoodsPurchaseInfoModel;

@interface AWEClassroomModel.ClassroomGoodsModel : MTLModel <MTLJSONSerializing> {
    void /* function */ goodsTitle;
    void /* function */ squareCover;
    void /* function */ labels;
    void /* function */ ecomProductDetailSchema;
}

@property (nonatomic) long long goodsId;
@property (nonatomic, copy) NSString *goodsTitle;
@property (nonatomic, copy) NSArray *squareCover;
@property (nonatomic) long long studentNumber;
@property (nonatomic, retain) _TtC17AWEClassroomModel31ClassroomGoodsPurchaseInfoModel *purchaseInfo;
@property (nonatomic, copy) NSArray *labels;
@property (nonatomic, copy) NSString *ecomProductDetailSchema;
@property (nonatomic) long long defaultSkuId;
@property (nonatomic) long long bizType;

+ (id)squareCoverJSONTransformer;
+ (id)purchaseInfoJSONTransformer;
+ (id)labelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
