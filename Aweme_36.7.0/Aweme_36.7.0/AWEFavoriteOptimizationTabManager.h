@class NSArray, AWEUserModel;

@interface AWEFavoriteOptimizationTabManager : NSObject

@property (copy, nonatomic) NSArray *tabItemArray;
@property (nonatomic) long long collectsTotalStatus;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) unsigned long long publicCollectionLandingTab;

+ (void)storeCollectsTotalStatus:(long long)a0 userID:(id)a1;
+ (long long)collectsTotalStatusWithUserID:(id)a0;

- (void)fetchListDataWithCompletion:(id /* block */)a0;
- (unsigned long long)updateLandingForFirstTabRedDot;
- (unsigned long long)updateLandingOnTabDetailRequestFinished:(id)a0 defaultFavoriteLandingType:(unsigned long long)a1 tagDataResponceModel:(id)a2;
- (unsigned long long)updateLandingInDefaultScene;
- (unsigned long long)updateLandingTypeWithScene:(unsigned long long)a0 params:(id)a1;
- (id)buildDefaultTabItemArray;
- (void)updateLockIconVisibleStatus;
- (void)updateRedDotInfo;
- (void)fetchListDataWithNoNeedParsedParamsToServer:(id)a0 completion:(id /* block */)a1;
- (id)itemRedDotAccessibilityText:(unsigned long long)a0;
- (BOOL)isLockIconVisibleWithType:(unsigned long long)a0;
- (BOOL)itemShouldShowRedDot:(id)a0;
- (id)tabItemArrayFromStorage;
- (void).cxx_destruct;

@end
