@class WCCanvasComponentReportVideoFloatAreaInfo, WCCanvasComponentReportUrlInfo;

@interface WCCanvasComponentReportGeneralVideoInfo : WCCanvasComponentReportBasicInfo

@property (nonatomic) unsigned int videoDuration;
@property (nonatomic) unsigned int playTimeInterval;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int playCompletedCount;
@property (nonatomic) unsigned int clickPlayControlCount;
@property (nonatomic) unsigned int clickVoiceControlCount;
@property (nonatomic) unsigned int isAutoPlay;
@property (nonatomic) unsigned long long clickSightCount;
@property (nonatomic) unsigned long long clickFullscreenBtnCount;
@property (nonatomic) unsigned long long doubleClickCount;
@property (nonatomic) unsigned long long clickSightIconCount;
@property (retain, nonatomic) WCCanvasComponentReportUrlInfo *thumbUrlInfo;
@property (retain, nonatomic) WCCanvasComponentReportUrlInfo *videoUrlInfo;
@property (retain, nonatomic) WCCanvasComponentReportVideoFloatAreaInfo *floatAreaInfo;

- (id)initWithCid:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
