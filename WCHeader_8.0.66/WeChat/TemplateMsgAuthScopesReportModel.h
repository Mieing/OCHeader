@class NSString;

@interface TemplateMsgAuthScopesReportModel : MMObject

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int enterSource;
@property (retain, nonatomic) NSString *msgType;
@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int totalSwitch;
@property (retain, nonatomic) NSString *templateTitle;
@property (retain, nonatomic) NSString *templateItems;
@property (nonatomic) unsigned long long opType;

- (void).cxx_destruct;

@end
