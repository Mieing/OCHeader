@class _TtC17AWEClassroomModel19ClassroomPriceModel;

@interface AWEClassroomModel.ClassroomGoodsPurchaseInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) _TtC17AWEClassroomModel19ClassroomPriceModel *price;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)priceJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
