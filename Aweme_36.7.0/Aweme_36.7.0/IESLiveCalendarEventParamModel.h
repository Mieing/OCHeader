@class NSString, NSArray;

@interface IESLiveCalendarEventParamModel : IESLiveDynamicModel

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long alarmTime;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *anchorSecId;
@property (nonatomic) long long validTime;
@property (retain, nonatomic) NSArray *recurrenceWeekDays;
@property (copy, nonatomic) NSString *url;

- (void).cxx_destruct;

@end
