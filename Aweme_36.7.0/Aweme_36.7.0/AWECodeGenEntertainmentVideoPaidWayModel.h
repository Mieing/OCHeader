@class NSArray;

@interface AWECodeGenEntertainmentVideoPaidWayModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *paidWaysModelArray;
@property (nonatomic) long long paidType;
@property (nonatomic) BOOL enableUseNewEntData;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
