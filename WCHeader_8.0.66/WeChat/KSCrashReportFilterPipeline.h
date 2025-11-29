@class NSArray, NSString;

@interface KSCrashReportFilterPipeline : NSObject <KSCrashReportFilter>

@property (retain, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithFilters:(id)a0;

- (id)initWithFilters:(id)a0;
- (id)initWithFiltersArray:(id)a0;
- (void)addFilter:(id)a0;
- (void)filterReports:(id)a0 onCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
