@class NSString;

@interface AWEFollowListRecommendCardManager : NSObject <AWEFollowListRecommendCardManagerProtocol>

@property (nonatomic) unsigned long long cardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getStoregeKeyWithOriginKey:(id)a0;
- (void)followListRecommendCardClicksDates;
- (unsigned long long)followListRecommendCardStyle;
- (void)switchOffRecommendCardTimesStorage;
- (void)switchOffRecommendCardNextShowDateStorage;
- (BOOL)didMeetClickFrequcy;
- (BOOL)canShowFollowListRecommendCard;
- (void)followListRecommendCardShowDates;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
