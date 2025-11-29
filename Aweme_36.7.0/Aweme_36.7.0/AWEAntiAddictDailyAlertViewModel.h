@class AWEAntiAddictDailyAlertUIConfig;

@interface AWEAntiAddictDailyAlertViewModel : NSObject

@property (retain, nonatomic) AWEAntiAddictDailyAlertUIConfig *config;
@property (nonatomic) unsigned long long timeType;

- (id)initWithUIConfig:(id)a0 timeType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
