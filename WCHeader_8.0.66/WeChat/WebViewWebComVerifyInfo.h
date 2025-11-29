@class NSString;

@interface WebViewWebComVerifyInfo : MMObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *resCdnUrl;
@property (copy, nonatomic) NSString *resMd5;
@property (nonatomic) unsigned int taskReportId;
@property (nonatomic) unsigned int taskJsCtxReportId;
@property (copy, nonatomic) NSString *webComptConfigJson;

- (id)description;
- (void).cxx_destruct;

@end
