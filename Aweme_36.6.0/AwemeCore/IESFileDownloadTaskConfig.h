@interface IESFileDownloadTaskConfig : NSObject

@property (nonatomic) long long maxDownloadTaskSize;
@property (nonatomic) long long maxPreloadTaskSize;
@property (nonatomic) double preloadLimitFactor;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
