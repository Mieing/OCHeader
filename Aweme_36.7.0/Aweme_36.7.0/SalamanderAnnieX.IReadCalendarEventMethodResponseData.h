@class NSString;

@interface SalamanderAnnieX.IReadCalendarEventMethodResponseData : NSObject {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ alarmOffset;
    void /* unknown type, empty encoding */ allDay;
    void /* function */ title;
    void /* function */ notes;
    void /* function */ location;
    void /* function */ url;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)init;

@end
