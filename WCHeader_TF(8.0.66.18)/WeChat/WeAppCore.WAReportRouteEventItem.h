@class NSString;

@interface WeAppCore.WAReportRouteEventItem : WAReportBaseItem {
    void /* unknown type, empty encoding */ webviewUrl;
}

@property (nonatomic) void /* unknown type, empty encoding */ eventType;
@property (nonatomic) void /* unknown type, empty encoding */ webviewId;
@property (nonatomic, copy) NSString *webviewUrl;

- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;

@end
