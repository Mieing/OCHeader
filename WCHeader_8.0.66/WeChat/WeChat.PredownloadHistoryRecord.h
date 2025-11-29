@class _TtC6WeChat17WCDBIntegerNumber, NSString, NSDate;

@interface WeChat.PredownloadHistoryRecord : NSObject {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ serverPriority;
    void /* unknown type, empty encoding */ clientPriority;
    void /* unknown type, empty encoding */ sizeThatStartPredownload;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *size;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *serverPriority;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *clientPriority;
@property (nonatomic) void /* unknown type, empty encoding */ downloadState;
@property (nonatomic) void /* unknown type, empty encoding */ downloadRetries;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *sizeThatStartPredownload;
@property (nonatomic) void /* unknown type, empty encoding */ skipQuota;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
