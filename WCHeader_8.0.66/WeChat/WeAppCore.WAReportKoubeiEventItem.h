@class NSString;

@interface WeAppCore.WAReportKoubeiEventItem : WAReportBaseItem {
    void /* unknown type, empty encoding */ sessionBuffer;
    void /* unknown type, empty encoding */ koubeiTitle;
}

@property (nonatomic, copy) NSString *sessionBuffer;
@property (nonatomic) void /* unknown type, empty encoding */ actionType;
@property (nonatomic, copy) NSString *koubeiTitle;
@property (nonatomic) void /* unknown type, empty encoding */ source;

- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;

@end
