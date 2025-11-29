@class NSTimer, IESECOrderSkeletonMonitorConfig, UIView;
@protocol IESECOrderSkeletonReportProtocol;

@interface IESECOrderSkeletonMonitor : NSObject

@property (weak, nonatomic) id<IESECOrderSkeletonReportProtocol> reportDelegate;
@property (weak, nonatomic) UIView *skeletonView;
@property (retain, nonatomic) NSTimer *monitorTimer;
@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) IESECOrderSkeletonMonitorConfig *currentMonitorConfig;
@property (nonatomic) unsigned long long skeletonType;
@property (nonatomic) double startTime;

- (void)registerSkeletonMonitorWithSkeletonView:(id)a0 skeletonType:(unsigned long long)a1;
- (void)stopInspectionAndReportMonitorWithScene:(unsigned long long)a0;
- (id)initWithReportDelegate:(id)a0 monitorConfig:(id)a1;
- (void)startSkeletonMonitorOnRenderPhase;
- (void)p_stopSkeletonMonitor;
- (void)p_reportSkeletonMonitorWithScene:(unsigned long long)a0;
- (void)p_checkSkeletonViewStatus;
- (void).cxx_destruct;

@end
