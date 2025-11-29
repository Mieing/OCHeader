@class NSString;

@interface KSCrashReportFilterJSONDecode : NSObject <KSCrashReportFilter>

@property (nonatomic) int decodeOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithOptions:(int)a0;

- (id)initWithOptions:(int)a0;
- (void)filterReports:(id)a0 onCompletion:(id /* block */)a1;

@end
