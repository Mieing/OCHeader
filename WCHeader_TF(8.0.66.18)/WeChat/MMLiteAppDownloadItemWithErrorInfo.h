@class MMLiteAppErrorReportInfo, MMLiteAppDownloadItem;

@interface MMLiteAppDownloadItemWithErrorInfo : NSObject

@property (retain, nonatomic) MMLiteAppErrorReportInfo *errorReportInfo;
@property (retain, nonatomic) MMLiteAppDownloadItem *downloadItem;

- (id)initWithInfo:(id)a0 downloadItem:(id)a1;
- (void).cxx_destruct;

@end
