@class NSString, AWELifeShelfResponseModel;

@interface AWELiveShelfCacheModel : NSObject

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) AWELifeShelfResponseModel *model;
@property (nonatomic) long long status;

- (void).cxx_destruct;

@end
