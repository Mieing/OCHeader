@class NSString, NSDate, NSNumber, _TtC6WeChat17WCDBIntegerNumber;

@interface WeChat.KaraProphetBehavior : NSObject {
    void /* unknown type, empty encoding */ dateThatHappened;
    void /* unknown type, empty encoding */ versionThatHappened;
    void /* unknown type, empty encoding */ dateThatPredicted;
    void /* unknown type, empty encoding */ dateThatPrepared;
    void /* unknown type, empty encoding */ dateThatExtracted;
    void /* unknown type, empty encoding */ dateThatRecalled;
    void /* unknown type, empty encoding */ prediction;
    void /* unknown type, empty encoding */ positive;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ userInfo;
}

@property (nonatomic, copy) NSDate *dateThatHappened;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *versionThatHappened;
@property (nonatomic, copy) NSDate *dateThatPredicted;
@property (nonatomic, copy) NSDate *dateThatPrepared;
@property (nonatomic, copy) NSDate *dateThatExtracted;
@property (nonatomic, copy) NSDate *dateThatRecalled;
@property (nonatomic, retain) NSNumber *prediction;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *positive;
@property (nonatomic, copy) NSString *features;
@property (nonatomic, retain) void /* unknown type, empty encoding */ predictAnalysis;
@property (nonatomic, retain) void /* unknown type, empty encoding */ extractAnalysis;
@property (nonatomic) void /* unknown type, empty encoding */ report;
@property (nonatomic, copy) NSString *userInfo;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
