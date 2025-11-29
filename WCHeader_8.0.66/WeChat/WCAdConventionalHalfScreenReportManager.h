@class WCStatTimerHelper, NSString, WCAdvertiseInfo, WCAdConventionalHalfScreenReportModel;

@interface WCAdConventionalHalfScreenReportManager : NSObject

@property (retain, nonatomic) WCStatTimerHelper *halfScreenTimerHelper;
@property (retain, nonatomic) WCAdConventionalHalfScreenReportModel *reportModel;
@property (retain, nonatomic) WCAdvertiseInfo *adData;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long contentOption;

- (id)initWithAdInfo:(id)a0 snsId:(id)a1 scene:(int)a2 contentOption:(unsigned long long)a3;
- (void)doHalfScreenReport;
- (void)reportHalfScreenExposureStart;
- (void)reportHalfScreenExposureEnd;
- (void)reportHalfScreenClickToFullScreen;
- (void)reportHalfScreenDragToFullScreen;
- (void)reportHalfScreenPinToTop;
- (void)reportHalfScreenVideoDuration:(unsigned long long)a0;
- (void)reportHalfScreenVideoPlayTimeInterval:(unsigned long long)a0;
- (void)reportHalfScreenVideoIncreasePlayCount;
- (void)reportHalfScreenVideoIncreasePlayCompletedCount;
- (void)reportHalfScreenGridIncreaseExposureCountWithIndex:(long long)a0;
- (void).cxx_destruct;

@end
