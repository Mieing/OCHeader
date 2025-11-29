@class NSDictionary;

@interface IESLiveGiftPanelCoreTimePoint : NSObject

@property (nonatomic) double stayRoomDuration;
@property (nonatomic) double panelStartShowingTime;
@property (nonatomic) long long panelStartShowingTimestamp;
@property (nonatomic) double panelStartAnimationTime;
@property (nonatomic) double panelRenderFinishTime;
@property (nonatomic) double panelRefreshTime;
@property (nonatomic) double firstImageRenderFinishTime;
@property (nonatomic) double defaultSelectTime;
@property (nonatomic) long long lynxInitTimestamp;
@property (nonatomic) double lynxRenderTime;
@property (copy, nonatomic) NSDictionary *lynxPerformanceInfo;

- (void).cxx_destruct;

@end
