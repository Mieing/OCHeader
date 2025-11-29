@interface AWENotificationGuideDisplay : NSObject

@property (class, nonatomic) long long displayDays;
@property (class, nonatomic) long long lastDisplayTimestamp;
@property (class, nonatomic) long long limitDays;
@property (class, nonatomic) long long lastCloseTimestamp;

+ (BOOL)canDisplayNotificationViewTestEnble;
+ (BOOL)canDisplayNotificationView;
+ (void)updateWithTimestamp:(double)a0 displayDays:(long long)a1;

@end
