@class NSArray;

@interface AWECodeGenPaidSeriesVipEntranceConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *unblockAdButtonsModelArray;
@property (copy, nonatomic) NSArray *blockAdButtonsModelArray;
@property (copy, nonatomic) NSArray *upperRightButtonsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
