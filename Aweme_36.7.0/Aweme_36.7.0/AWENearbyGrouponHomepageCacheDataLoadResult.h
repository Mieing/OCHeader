@class NSString, AWENearbyGrouponListDataLocalCache;

@interface AWENearbyGrouponHomepageCacheDataLoadResult : NSObject

@property (nonatomic) BOOL isLoadCompleted;
@property (retain, nonatomic) NSString *loadErrorMsg;
@property (retain, nonatomic) AWENearbyGrouponListDataLocalCache *cacheDataModel;

- (void)completeDataLoadWithErrorMessage:(id)a0;
- (void).cxx_destruct;

@end
