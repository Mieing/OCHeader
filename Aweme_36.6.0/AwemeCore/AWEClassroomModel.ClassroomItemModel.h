@class _TtC17AWEClassroomModel19ClassroomGoodsModel;

@interface AWEClassroomModel.ClassroomItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemId;
@property (nonatomic) long long itemType;
@property (nonatomic, retain) _TtC17AWEClassroomModel19ClassroomGoodsModel *goods;

+ (id)goodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
