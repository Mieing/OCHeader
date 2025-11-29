@interface IESECRelationObtainABTestModule : NSObject

@property (nonatomic) long long winFirstFrameOptimized;
@property (nonatomic) long long winFirstFrameCreateTabViewController;
@property (nonatomic) BOOL winFeedLayoutCache;
@property (nonatomic) BOOL winStopTagsPreload;
@property (nonatomic) long long winVaneRecommendProduct;
@property (nonatomic) long long winVaneGuessLike;
@property (nonatomic) long long winVaneGapCount;
@property (nonatomic) BOOL enableWinTabLoadingNewType;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)winFirstFrameCreateTabVC;
- (BOOL)enableWindowNewLoading;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
