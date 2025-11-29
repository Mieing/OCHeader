@class NSString;

@interface WeAppCore.WAReportNavigateMapAppItem : WAReportBaseItem {
    void /* unknown type, empty encoding */ clickItem;
    void /* unknown type, empty encoding */ exposeWeAppList;
    void /* unknown type, empty encoding */ poiid;
    void /* unknown type, empty encoding */ exposeMapList;
}

@property (nonatomic) void /* unknown type, empty encoding */ opType;
@property (nonatomic, copy) NSString *clickItem;
@property (nonatomic, copy) NSString *exposeWeAppList;
@property (nonatomic, copy) NSString *poiid;
@property (nonatomic, copy) NSString *exposeMapList;
@property (nonatomic) void /* unknown type, empty encoding */ enterScene;
@property (nonatomic) void /* unknown type, empty encoding */ tencentMapInstallStatus;

- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;

@end
