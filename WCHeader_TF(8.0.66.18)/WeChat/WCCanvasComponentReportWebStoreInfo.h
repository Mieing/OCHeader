@interface WCCanvasComponentReportWebStoreInfo : WCCanvasComponentReportBasicInfo

@property (nonatomic) int isPreloaded;
@property (nonatomic) unsigned long long loadingTime;
@property (nonatomic) int didClickDone;

- (id)dictionaryRepresentation;

@end
