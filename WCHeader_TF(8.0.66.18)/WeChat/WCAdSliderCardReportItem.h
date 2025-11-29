@class NSString, WCADVideoPlayInfo;

@interface WCAdSliderCardReportItem : NSObject

@property (nonatomic) int index;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL hasBorder;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned int autoSlideInCount;
@property (nonatomic) unsigned int clickCount;
@property (nonatomic) unsigned int btnClickCount;
@property (nonatomic) unsigned int productClickCount;
@property (nonatomic) unsigned int playOver1sCount;
@property (nonatomic) unsigned int finishPlayCount;
@property (retain, nonatomic) WCADVideoPlayInfo *playInfoForTotalPlayTime;
@property (nonatomic) unsigned long long maxPlayTime;
@property (nonatomic) unsigned long long videoTotalTime;
@property (retain, nonatomic) NSString *extra;
@property (nonatomic) BOOL playOver1sCountFlag;

- (void).cxx_destruct;

@end
