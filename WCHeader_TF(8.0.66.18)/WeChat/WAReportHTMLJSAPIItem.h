@class NSString;

@interface WAReportHTMLJSAPIItem : WAReportBaseItem

@property (retain, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) NSString *funcName;
@property (retain, nonatomic) NSString *keyParam;
@property (nonatomic) long long jsapiResult;
@property (nonatomic) long long permissionValue;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMsgStr;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
