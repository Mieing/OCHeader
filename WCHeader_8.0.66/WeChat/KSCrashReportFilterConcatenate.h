@class NSString, NSArray;

@interface KSCrashReportFilterConcatenate : NSObject <KSCrashReportFilter>

@property (retain, nonatomic) NSString *separatorFmt;
@property (retain, nonatomic) NSArray *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithSeparatorFmt:(id)a0 keys:(id)a1;

@end
