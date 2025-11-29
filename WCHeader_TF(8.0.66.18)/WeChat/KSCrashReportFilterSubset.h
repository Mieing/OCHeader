@class NSArray, NSString;

@interface KSCrashReportFilterSubset : NSObject <KSCrashReportFilter>

@property (retain, nonatomic) NSArray *keyPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithKeys:(id)a0;

@end
