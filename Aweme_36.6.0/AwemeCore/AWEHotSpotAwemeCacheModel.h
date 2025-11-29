@class AWEAwemeModel;

@interface AWEHotSpotAwemeCacheModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long cacheTime;

- (id)initWithAweme:(id)a0 cacheTime:(long long)a1;
- (void).cxx_destruct;

@end
