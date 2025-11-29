@class NSString;

@interface SalamanderAnnieX.ICreateCalendarEventMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_identifier;
    void /* unknown type, empty encoding */ __rts_repeatInterval;
    void /* unknown type, empty encoding */ __rts_repeatCount;
    void /* unknown type, empty encoding */ __rts_startDate;
    void /* unknown type, empty encoding */ __rts_endDate;
    void /* unknown type, empty encoding */ alarmOffset;
    void /* unknown type, empty encoding */ allDay;
    void /* function */ title;
    void /* function */ notes;
    void /* function */ location;
    void /* function */ url;
    void /* function */ calendarName;
    void /* unknown type, empty encoding */ __rts_repeatFrequency;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double repeatInterval;
@property (nonatomic) double repeatCount;
@property (nonatomic) double startDate;
@property (nonatomic) double endDate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *calendarName;
@property (nonatomic, copy) NSString *repeatFrequency;

- (void).cxx_destruct;
- (id)init;

@end
