@class NSString;

@interface KSCrashReportFilterObjectForKey : NSObject <KSCrashReportFilter>

@property (retain, nonatomic) id key;
@property (nonatomic) BOOL allowNotFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithKey:(id)a0 allowNotFound:(BOOL)a1;

- (id)initWithKey:(id)a0 allowNotFound:(BOOL)a1;
- (void)filterReports:(id)a0 onCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
