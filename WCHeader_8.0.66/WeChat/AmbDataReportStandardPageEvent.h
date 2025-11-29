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

- (void)setRefPageInfo:(id)a0;
- (id)refPageInfo;
- (void)setSourcePageInfo:(id)a0;
- (id)sourcePageInfo;
- (void)setRouteRules:(id)a0;
- (id)routeRules;
- (void)setParams:(id)a0;
- (id)params;
- (void)setPageName:(id)a0;
- (id)pageName;
- (void)setPageId:(unsigned int)a0;
- (unsigned int)pageId;
- (void)setEventId:(id)a0;
- (id)eventId;
- (void)setTime:(unsigned long long)a0;
- (unsigned long long)time;

@end
