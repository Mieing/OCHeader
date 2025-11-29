@class NSString;

@interface LiveEndPageConfigReportMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) unsigned int jumpinfoType;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

@end
