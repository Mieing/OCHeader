@class NSString;

@interface KSCrashReportFilterGZipCompress : NSObject <KSCrashReportFilter>

@property (nonatomic) int compressionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithCompressionLevel:(int)a0;

- (id)initWithCompressionLevel:(int)a0;
- (void)filterReports:(id)a0 onCompletion:(id /* block */)a1;

@end
