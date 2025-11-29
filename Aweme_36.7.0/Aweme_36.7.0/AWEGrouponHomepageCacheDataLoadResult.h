@class NSString, AWEGrouponListDataLocalCache;

@interface AWEGrouponHomepageCacheDataLoadResult : NSObject

@property (nonatomic) BOOL isLoadCompleted;
@property (retain, nonatomic) NSString *loadErrorMsg;
@property (retain, nonatomic) AWEGrouponListDataLocalCache *cacheDataModel;

- (void)completeDataLoadWithErrorMessage:(id)a0;
- (void).cxx_destruct;

@end
