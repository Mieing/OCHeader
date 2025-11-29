@class NSString;

@interface WAReportHTMLActionItem : WAReportBaseItem

@property (retain, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) NSString *referpageurl;
@property (nonatomic) long long targetAction;
@property (retain, nonatomic) NSString *targetPageUrl;
@property (nonatomic) unsigned int clientTimestamp;
@property (nonatomic) unsigned int publiclibversion;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
