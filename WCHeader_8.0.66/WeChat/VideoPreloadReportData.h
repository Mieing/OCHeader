@class NSString;

@interface VideoPreloadReportData : MMObject

@property (copy, nonatomic) NSString *mediaId;
@property (nonatomic) unsigned int preloadVideoPercent;
@property (nonatomic) unsigned int preloadDuration;
@property (nonatomic) unsigned int preloadDataSize;
@property (nonatomic) unsigned int preloadVideoSize;

- (void).cxx_destruct;

@end
