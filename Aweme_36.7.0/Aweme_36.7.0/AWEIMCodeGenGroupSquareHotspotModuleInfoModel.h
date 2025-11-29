@class NSString, NSArray;

@interface AWEIMCodeGenGroupSquareHotspotModuleInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSArray *hotspotInfoListModelArray;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
