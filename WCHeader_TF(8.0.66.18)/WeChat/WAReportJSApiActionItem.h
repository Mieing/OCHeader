@class NSString;

@interface WAReportJSApiActionItem : WAReportBaseItem

@property (retain, nonatomic) NSString *funcName;
@property (retain, nonatomic) NSString *keyParam;
@property (nonatomic) int result;
@property (nonatomic) int permissionValue;
@property (nonatomic) int errorcode;
@property (nonatomic) unsigned long long costtime;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *keyResult;
@property (retain, nonatomic) NSString *keyRequest;
@property (nonatomic) BOOL shouldRoute13542To27220;

- (id)reportString;
- (BOOL)isKeyJSApi;
- (void).cxx_destruct;

@end
