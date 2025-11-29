@class NSString, NSDictionary;

@interface IESGCPGameDetailQualityTrack : NSObject <IESGCPGameDetailQualityTrackService>

@property (retain, nonatomic) NSString *trackId;
@property (retain, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *fetchMonitorParams;
@property (nonatomic) BOOL hasReportLaunchConsume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCommonParams:(id)a0;
- (id)initWithTrackId:(id)a0 diContext:(id)a1;
- (void)reportLaunchSuc:(id)a0;
- (void)reportLaunchConsume:(id)a0;
- (void)addFetchMonitorParams:(id)a0;
- (void).cxx_destruct;

@end
