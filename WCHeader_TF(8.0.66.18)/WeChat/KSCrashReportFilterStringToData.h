@class NSString;

@interface KSCrashReportFilterStringToData : NSObject <KSCrashReportFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;

- (void)filterReports:(id)a0 onCompletion:(id /* block */)a1;

@end
