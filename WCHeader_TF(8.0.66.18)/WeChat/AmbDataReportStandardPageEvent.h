@class NSString, NSMutableArray, AmbDataReportPageInfo;

@interface AmbDataReportStandardPageEvent : WXPBGeneratedMessage

@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) unsigned int pageId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableArray *params;
@property (retain, nonatomic) NSMutableArray *routeRules;
@property (retain, nonatomic) AmbDataReportPageInfo *sourcePageInfo;
@property (retain, nonatomic) AmbDataReportPageInfo *refPageInfo;

+ (void)initialize;

@end
