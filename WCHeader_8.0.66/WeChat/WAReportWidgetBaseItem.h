@class NSString;

@interface WAReportWidgetBaseItem : WAReportBaseItem

@property (nonatomic) unsigned int widgetType;
@property (retain, nonatomic) NSString *requestKey;

+ (id)itemWithAppId:(id)a0 version:(long long)a1 state:(unsigned long long)a2 widgetType:(unsigned int)a3 requestKey:(id)a4;

- (void)makeSafeString;
- (void).cxx_destruct;

@end
