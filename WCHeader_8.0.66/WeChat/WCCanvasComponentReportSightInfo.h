@class WCCanvasComponentReportVideoFloatAreaInfo, WCCanvasComponentReportUrlInfo;

@interface WCCanvasComponentReportSightInfo : WCCanvasComponentReportBasicInfo

@property (nonatomic) unsigned int sightDuration;
@property (nonatomic) unsigned int playTimeInterval;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int playCompletedCount;
@property (nonatomic) unsigned int clickVoiceControlCount;
@property (nonatomic) unsigned int isAutoPlay;
@property (nonatomic) unsigned int clickSightCount;
@property (nonatomic) unsigned int streamVideoEnterCount;
@property (nonatomic) unsigned int streamVideoPlayCount;
@property (nonatomic) unsigned int streamVideoPlayCompleteCount;
@property (nonatomic) unsigned long long streamVideoTotalPlayTimeInMs;
@property (retain, nonatomic) WCCanvasComponentReportUrlInfo *thumbUrlInfo;
@property (retain, nonatomic) WCCanvasComponentReportUrlInfo *sightUrlInfo;
@property (nonatomic) unsigned long long clickFullscreenBtnCount;
@property (nonatomic) unsigned long long doubleClickCount;
@property (nonatomic) unsigned long long clickSightIconCount;
@property (nonatomic) unsigned long long clickPlayControlCount;
@property (nonatomic) int isNewUI;
@property (retain, nonatomic) WCCanvasComponentReportVideoFloatAreaInfo *floatAreaInfo;

- (id)initWithCid:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
