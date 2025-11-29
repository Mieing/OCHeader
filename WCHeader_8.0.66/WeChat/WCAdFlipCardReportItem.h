@class WCADVideoPlayInfo;

@interface WCAdFlipCardReportItem : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned int playOver1sCount;
@property (nonatomic) unsigned int finishPlayCount;
@property (retain, nonatomic) WCADVideoPlayInfo *playInfoForTotalPlayTime;
@property (nonatomic) unsigned long long videoTotalTime;
@property (nonatomic) BOOL playOver1sCountFlag;

- (void).cxx_destruct;

@end
