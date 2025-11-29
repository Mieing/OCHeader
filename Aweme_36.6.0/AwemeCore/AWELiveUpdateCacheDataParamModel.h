@class NSString, NSNumber;

@interface AWELiveUpdateCacheDataParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *cacheData;
@property (retain, nonatomic) NSNumber *validSeconds;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
