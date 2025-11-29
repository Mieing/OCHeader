@class AWEUserModel;

@interface AWEProfileContrailHelper : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isContrailFullScreen;

+ (void)trackShowUpstairShopWithUser:(id)a0 entranceLocation:(id)a1 headerTrackerParams:(id)a2;
+ (void)enterUpstairShopWithUser:(id)a0 animated:(BOOL)a1 entranceLocation:(id)a2 headerTrackerParams:(id)a3;
+ (void)trackEnterUpstairShopWithUser:(id)a0 enterMethod:(id)a1;
+ (id)eCommerceTrackParamsWithEntranceLocation:(id)a0 headerTrackerParams:(id)a1;
+ (BOOL)enableUpstairShop:(id)a0;
+ (double)enterUpstairShopOffset;

- (BOOL)getVal_isContrailFullScreen;
- (void).cxx_destruct;

@end
