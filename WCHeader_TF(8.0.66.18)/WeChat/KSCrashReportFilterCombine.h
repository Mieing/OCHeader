@class NSArray, NSString;

@interface KSCrashReportFilterCombine : NSObject <KSCrashReportFilter>

@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) NSArray *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)argBlockWithFilters:(id)a0 andKeys:(id)a1;
+ (id)filterWithFiltersAndKeys:(id)a0;

@end
