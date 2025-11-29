@class NSString;

@interface BrandPluginTemplateMsgReportModel : MMObject

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgContent;
@property (retain, nonatomic) NSString *templateUniqueMsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int jumpType;
@property (nonatomic) unsigned int location;
@property (nonatomic) unsigned int msgType;

- (void).cxx_destruct;

@end
