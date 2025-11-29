@interface AWECodeGenInsertItemCardModel : AWEBaseDataModel

@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int pullType;

+ (id)JSONKeyPathsByPropertyKey;

@end
