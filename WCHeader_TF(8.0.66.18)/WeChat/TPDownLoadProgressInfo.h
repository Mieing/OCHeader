@class NSString;

@interface TPDownLoadProgressInfo : NSObject

@property (readonly, nonatomic) int playableDurationMS;
@property (readonly, nonatomic) int downloadSpeedKBps;
@property (readonly, nonatomic) long long currentDownloadSize;
@property (readonly, nonatomic) long long totalFileSize;
@property (readonly, copy, nonatomic) NSString *extraInfo;

- (id)initWithPlayableDuration:(int)a0 downloadSpeed:(int)a1 currentDownloadSize:(long long)a2 totalFileSize:(long long)a3 extraInfo:(id)a4;
- (void).cxx_destruct;

@end
