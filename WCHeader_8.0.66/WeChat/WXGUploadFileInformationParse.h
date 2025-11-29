@interface WXGUploadFileInformationParse : NSObject

+ (id)sharedInstance;
+ (id)GetWatchLogPathWithTimeSpan:(id)a0;

- (id)files;
- (void)onIPXX:(id)a0;
- (void)parseFileInformationsWithXml:(id)a0;
- (void)uploadImmediateUploadFile:(id)a0;
- (void)onIPXXReportShareExtensionLog:(id)a0;
- (void)uploadExtensionLogWithTimeSpan:(id)a0;
- (void)onIPXXReportWatchLog:(id)a0;
- (void)uploadWatchLogWithTimeSpan:(id)a0;
- (id)flutterProfilerPathTransform:(id)a0;

@end
