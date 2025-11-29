@class NSDate;

@interface AWEAntiAddictRemindLaterModel : NSObject

@property (nonatomic) double remindLaterClickTime;
@property (retain, nonatomic) NSDate *remindLaterSessionStartTime;
@property (nonatomic) double remindLaterSessionUseDuration;
@property (nonatomic) long long delayRemindTime;

+ (id)instanceWithClickTime:(double)a0 sessionStartTime:(id)a1 sessionUseDuration:(double)a2 delayRemindTime:(long long)a3;

- (void).cxx_destruct;

@end
