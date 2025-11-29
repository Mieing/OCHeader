@class AWENearbyActivityBubbleResource, AWENearbyActivityTabResourceModel, AWENearbyActivityResourceBaseModel;

@interface AWENearbyActivityResourceModel : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyActivityBubbleResource *bubbleResource;
@property (retain, nonatomic) AWENearbyActivityResourceBaseModel *tab2StatusBarBackground;
@property (retain, nonatomic) AWENearbyActivityResourceBaseModel *tab2TopBackground;
@property (retain, nonatomic) AWENearbyActivityResourceBaseModel *homepageTopBackground;
@property (retain, nonatomic) AWENearbyActivityResourceBaseModel *homepageRoamBackground;
@property (retain, nonatomic) AWENearbyActivityTabResourceModel *tabButtonResource;

+ (id)bubbleResourceJSONTransformer;
+ (id)tab2StatusBarBackgroundJSONTransformer;
+ (id)tab2TopBackgroundJSONTransformer;
+ (id)homepageTopBackgroundJSONTransformer;
+ (id)homepageRoamBackgroundJSONTransformer;
+ (id)tabButtonResourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isInTabButtonBackgroundDisplayPeriod;
- (BOOL)isHomePageInBackgroundDisplayPeriod;
- (BOOL)isInActivityPeriod;
- (BOOL)is2TabInBackgroundDisplayPeriod;
- (void).cxx_destruct;
- (double)currentTimeStamp;

@end
