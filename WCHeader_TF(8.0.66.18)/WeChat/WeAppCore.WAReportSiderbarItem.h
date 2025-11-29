@class NSString;

@interface WeAppCore.WAReportSiderbarItem : WAReportBaseItem {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ actionNote;
    void /* unknown type, empty encoding */ extraData;
}

@property (nonatomic, copy) NSString *actionNote;
@property (nonatomic) void /* unknown type, empty encoding */ actionScene;
@property (nonatomic) void /* unknown type, empty encoding */ actionTime;
@property (nonatomic, copy) NSString *extraData;

- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;

@end
