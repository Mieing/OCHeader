@class NSString, AWEVideoBSModel;

@interface AWEMediumVideoChannelCachePreloadModel : NSObject <NSCoding>

@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL isFinishPreload;
@property (nonatomic) BOOL isLastTryFailed;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) long long preloadTiming;
@property (copy, nonatomic) NSString *cachedURL;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) AWEVideoBSModel *bsModel;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
