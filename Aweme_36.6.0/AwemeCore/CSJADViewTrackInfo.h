@class NSDate;

@interface CSJADViewTrackInfo : NSObject

@property (nonatomic) double viewDidAllVisibleTime;
@property (retain, nonatomic) NSDate *didEnterBackgroundDate;
@property (retain, nonatomic) NSDate *willEnterForegroundDate;
@property (nonatomic) double showStartTime;
@property (nonatomic) double showFirstQuartileTime;
@property (nonatomic) double showMidTime;
@property (nonatomic) double showThirdQuartileTime;
@property (nonatomic) double showFullTime;

- (id)showTimeDict;
- (void).cxx_destruct;
- (long long)duration;

@end
