@interface AWESearchTabGuideActionModel : AWEBaseApiModel

@property (nonatomic) long long ID;
@property (nonatomic) long long showNum;
@property (nonatomic) long long clickNum;
@property (nonatomic) long long lastShowTime;
@property (nonatomic) long long lastClickTime;
@property (nonatomic) long long timeStartInterval;
@property (nonatomic) long long globalTimeStartInterval;
@property (nonatomic) long long showNumInterval;
@property (nonatomic) long long globalShowNumInterval;
@property (nonatomic) long long bubbleShowTimeToday;
@property (nonatomic) long long bubblebanedInDay;

+ (id)JSONKeyPathsByPropertyKey;

@end
