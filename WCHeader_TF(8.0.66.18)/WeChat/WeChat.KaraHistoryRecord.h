@class _TtC6WeChat17WCDBIntegerNumber, NSDate;

@interface WeChat.KaraHistoryRecord : NSObject {
    void /* unknown type, empty encoding */ dateThatHappened;
    void /* unknown type, empty encoding */ dateThatRecalled;
    void /* unknown type, empty encoding */ hourOfTheDay;
    void /* unknown type, empty encoding */ dayOfTheWeek;
}

@property (nonatomic, copy) NSDate *dateThatHappened;
@property (nonatomic, copy) NSDate *dateThatRecalled;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *hourOfTheDay;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *dayOfTheWeek;

- (id)init;
- (void).cxx_destruct;

@end
