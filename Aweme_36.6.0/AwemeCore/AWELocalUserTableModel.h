@class AWELocalColorRingModel, AWELocalFamiliarModel;

@interface AWELocalUserTableModel : AWEBaseApiModel

@property (nonatomic) long long opType;
@property (nonatomic) long long modifyTime;
@property (retain, nonatomic) AWELocalFamiliarModel *familiarModel;
@property (retain, nonatomic) AWELocalColorRingModel *colorRingModel;

+ (id)colorRingModelJSONTransformer;
+ (id)familiarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)currentModelWithTableName:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
