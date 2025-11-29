@class NSString;

@interface PageReportRouter : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pageSimpleName;
@property (nonatomic) unsigned int pageId;
@property (nonatomic) unsigned int hashKey;
@property (nonatomic) unsigned int taskId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int eventPolicy;
@property (retain, nonatomic) NSString *params;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned int lastSessionEnterType;
@property (nonatomic) BOOL isInFinderTask;
@property (retain, nonatomic) NSString *sdkEnterType;

+ (void)initialize;

@end
