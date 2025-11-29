@class NSString;

@interface AWECalendarEvent : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long alarmTime;
@property (nonatomic) long long continousDays;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tag;

- (void).cxx_destruct;

@end
