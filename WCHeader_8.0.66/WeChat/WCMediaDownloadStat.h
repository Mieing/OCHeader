@interface WCMediaDownloadStat : NSObject

@property (nonatomic) unsigned long long downloadStartTime;
@property (nonatomic) unsigned long long downloadEndTime;
@property (nonatomic) unsigned int downloadSize;
@property (nonatomic) unsigned int imgWidth;
@property (nonatomic) unsigned int imgHeight;
@property (nonatomic) unsigned long long downloadFormat;

@end
