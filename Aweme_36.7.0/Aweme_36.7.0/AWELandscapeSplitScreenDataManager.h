@class NSMutableArray, AWELandscapePageContext;

@interface AWELandscapeSplitScreenDataManager : NSObject

@property (retain, nonatomic) NSMutableArray *postCacheDataController;
@property (retain, nonatomic) NSMutableArray *detailCacheDataController;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;

- (id)initWithPageContext:(id)a0;
- (id)findPostDataControllerFromCacheWithModel:(id)a0 currentUserModel:(id)a1;
- (void)trackExitSplitScreenFailWithReason:(id)a0 isLoading:(BOOL)a1 splitScreenMode:(long long)a2;
- (void)removePostCacheDataControllerIfNeededWithUserID:(id)a0;
- (void)removeDetailDataControllerIfNeeded;
- (id)findDetailDataControllerFromCacheWithModel:(id)a0;
- (void).cxx_destruct;

@end
