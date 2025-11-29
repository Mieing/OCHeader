@class NSString, AWEHPEnterTabTrackModel;

@interface AWEHPTabStayTimeTimingModel : NSObject

@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) double enterTabInterval;
@property (nonatomic) double enterTabCAMediaInterval;
@property (nonatomic) double timingInterval;
@property (nonatomic) double CAMediaTimingInterval;
@property (nonatomic) long long totalDuration;
@property (retain, nonatomic) AWEHPEnterTabTrackModel *trackModel;
@property (nonatomic) long long lastShowBubbleDuration;
@property (nonatomic) long long lastShowBadgeDuration;
@property (nonatomic) long long sessionCount;
@property (nonatomic) BOOL isTiming;

- (void).cxx_destruct;
- (id)init;

@end
