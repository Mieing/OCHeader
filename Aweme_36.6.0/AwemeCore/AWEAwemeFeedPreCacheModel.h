@class NSString, AWEVideoBSModel;

@interface AWEAwemeFeedPreCacheModel : MTLModel

@property (nonatomic) BOOL isDownLoading;
@property (nonatomic) BOOL isFinishDownloading;
@property (nonatomic) BOOL isLastTryFailed;
@property (nonatomic) BOOL isFromCache;
@property (copy, nonatomic) NSString *cachedURL;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) double cacheTimeStamp;
@property (retain, nonatomic) AWEVideoBSModel *bsModel;

- (void).cxx_destruct;

@end
