@interface AWEGrouponC2InnerFmpTrackerModel : AWEGrouponC2TrackerModel

@property (nonatomic) double totalTime;
@property (nonatomic) double visibleTime;
@property (nonatomic) double jumpPageTime;
@property (nonatomic) long long awemeType;
@property (nonatomic) BOOL interrupted;
@property (nonatomic) unsigned long long interruptedReason;
@property (nonatomic) long long pageType;

@end
