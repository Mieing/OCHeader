@interface WCEditVideoInformation : NSObject

@property (nonatomic) double videoBitrate;
@property (nonatomic) double videoFramerate;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double audioBitrate;
@property (nonatomic) unsigned long long audioChannels;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long codecType;

- (id)toReportStr;

@end
