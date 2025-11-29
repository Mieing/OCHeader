@interface AWEAwemeVisualSearchInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL canShowEntrance;
@property (nonatomic) long long enableLongPressRequestTag;
@property (nonatomic) BOOL isEcomImg;
@property (nonatomic) BOOL isHighAccuracyEcom;
@property (nonatomic) BOOL isHighRecallEcom;

+ (id)JSONKeyPathsByPropertyKey;

@end
