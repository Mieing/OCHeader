@interface BUDownloadSpeedModel : NSObject

@property double startDownloadTime;
@property double finishDownloadTime;
@property long long downloadSize;
@property (nonatomic) double speed;

@end
