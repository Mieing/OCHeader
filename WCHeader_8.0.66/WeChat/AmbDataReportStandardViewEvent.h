@class NSString, NSMutableArray, AmbDataReportPageInfo;

@interface AmbDataReportStandardViewEvent : WXPBGeneratedMessage

@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSMutableArray *params;
@property (retain, nonatomic) NSMutableArray *routeRules;
@property (retain, nonatomic) AmbDataReportPageInfo *curPageInfo;
@property (retain, nonatomic) AmbDataReportPageInfo *sourcePageInfo;
@property (retain, nonatomic) AmbDataReportPageInfo *refPageInfo;

+ (void)initialize;

@end
