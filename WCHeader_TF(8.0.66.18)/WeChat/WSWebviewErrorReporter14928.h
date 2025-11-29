@class NSString;

@interface WSWebviewErrorReporter14928 : WSReportBaseItem

@property (nonatomic) unsigned long long errorType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int h5version;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) unsigned long long timeStamp;
@property (copy, nonatomic) NSString *webviewID;
@property (nonatomic) unsigned long long evaluateJSTimes;
@property (copy, nonatomic) NSString *lastEvaluateJSString;
@property (nonatomic) unsigned long long survivalTime;
@property (copy, nonatomic) NSString *baseLoadURLString;
@property (nonatomic) BOOL useReusePool;
@property (nonatomic) unsigned long long stayInReuablePoolTime;
@property (copy, nonatomic) NSString *topViewControllerName;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) BOOL isWebviewOnForeground;

- (id)init;
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)getInfoFrom:(id)a0;
- (void)doReport;
- (void).cxx_destruct;

@end
