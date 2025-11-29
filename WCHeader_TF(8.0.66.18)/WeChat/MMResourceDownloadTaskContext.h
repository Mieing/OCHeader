@class MMResDownloadInfo, MMResDownloadUrlInfo;

@interface MMResourceDownloadTaskContext : NSObject

@property (nonatomic) unsigned int resType;
@property (nonatomic) unsigned int resSubType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) MMResDownloadUrlInfo *downloadUrlInfo;
@property (retain, nonatomic) MMResDownloadInfo *downloadInfo;

- (void).cxx_destruct;

@end
