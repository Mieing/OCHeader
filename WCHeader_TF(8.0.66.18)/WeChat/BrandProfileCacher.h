@class MemoryMappedKV, NSMutableSet, NSString;

@interface BrandProfileCacher : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *bizProfileSlotKV;
@property (nonatomic) BOOL needShowRecommendFollowView;
@property (retain, nonatomic) NSMutableSet *needShowRecommendFollowSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)markBrandUsername:(id)a0 needToShowRecommendFollowView:(BOOL)a1;
- (BOOL)shouldShowRecommendFollowViewForUsername:(id)a0;
- (id)readProfileCacheItemForBrand:(id)a0;
- (BOOL)writeProfileCacheItem:(id)a0 forBrand:(id)a1;
- (void)checkOverwriteRespOnFeatureMsg:(id)a0 withCacheItem:(id)a1;
- (void)markNeedToShowRecommendFollowView:(BOOL)a0;
- (BOOL)checkNeedToShowRecommendFollowView;
- (void)updateClickCommendCookie:(id)a0 forUsername:(id)a1;
- (id)getClickCommendCookie:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (void).cxx_destruct;

@end
