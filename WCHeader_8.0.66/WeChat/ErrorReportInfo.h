@class NSString;

@interface ErrorReportInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int stage;
@property (nonatomic) unsigned int errorType;
@property (nonatomic) unsigned int errorLevel;
@property (retain, nonatomic) NSString *methodName;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *abnormalFieldName;
@property (retain, nonatomic) NSString *extraInfo;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long role;
@property (nonatomic) unsigned int timestamp;

+ (void)initialize;

@end
