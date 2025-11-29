@class NSString;

@interface MPPageOfflineCacheImageDownloadTask : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *pageIdentity;
@property (nonatomic) long long retryTimes;

+ (id)fileNameFromUrl:(id)a0;

- (id)taskID;
- (id)fileName;
- (id)description;
- (void).cxx_destruct;

@end
