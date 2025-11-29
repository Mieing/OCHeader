@interface WSTemplateVersionReporter17040 : WSReportBaseItem

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long templateVersion;
@property (nonatomic) unsigned long long useType;

+ (id)genLastReportMMKVKey:(unsigned long long)a0;
+ (id)genVersionMMKVKey:(unsigned long long)a0;
+ (unsigned long long)GetReportTypeByBiz:(unsigned long long)a0;
+ (void)ReportAllType;

- (id)initWithType:(unsigned long long)a0 version:(unsigned int)a1;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (void)tryReportOneDayOneTime;
- (void)doReport;

@end
