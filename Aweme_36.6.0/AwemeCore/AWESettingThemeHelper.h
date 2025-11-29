@class NSCalendar, NSTimeZone;

@interface AWESettingThemeHelper : NSObject

@property (retain, nonatomic) NSTimeZone *timezone;
@property (retain, nonatomic) NSCalendar *calendar;

+ (id)settingThemeHelper;

- (id)localTime:(id)a0;
- (void).cxx_destruct;

@end
