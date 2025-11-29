@class FavoritesDownloadCDNInfo;

@interface FavCdnTaskInfo : NSObject

@property (nonatomic) int retryCount;
@property (nonatomic) long long remainSize;
@property (retain, nonatomic) FavoritesDownloadCDNInfo *downloadInfo;

- (void).cxx_destruct;

@end
