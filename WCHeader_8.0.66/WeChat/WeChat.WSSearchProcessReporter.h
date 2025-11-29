@class NSString;

@interface WeChat.WSSearchProcessReporter : WSReportBaseItem {
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ subSessionId;
    void /* unknown type, empty encoding */ searchId;
    void /* unknown type, empty encoding */ offset;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ tagId;
    void /* unknown type, empty encoding */ bizType;
    void /* unknown type, empty encoding */ h5Version;
}

@property (nonatomic) void /* unknown type, empty encoding */ actionType;
@property (nonatomic) void /* unknown type, empty encoding */ scene;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic) void /* unknown type, empty encoding */ isHomePage;
@property (nonatomic) void /* unknown type, empty encoding */ successType;
@property (nonatomic) void /* unknown type, empty encoding */ isPreload;

- (void)assignValueWith:(id)a0;
- (unsigned int)reportKvId;
- (void)doReport;
- (void)report:(int)a0;
- (void)report:(int)a0 with:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
