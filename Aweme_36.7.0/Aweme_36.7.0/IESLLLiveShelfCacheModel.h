@class NSString, IESLLLiveShelfResponseModel;

@interface IESLLLiveShelfCacheModel : NSObject

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) IESLLLiveShelfResponseModel *model;
@property (nonatomic) long long status;

- (void).cxx_destruct;

@end
