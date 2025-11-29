@interface WCCoverPostReporter : NSObject

@property (nonatomic) long long contentSource;

+ (id)attachedReporterFromObject:(id)a0;

- (void)reportWithUploadTask:(id)a0;
- (void)clearContext;
- (void)attachReporterToObject:(id)a0;

@end
