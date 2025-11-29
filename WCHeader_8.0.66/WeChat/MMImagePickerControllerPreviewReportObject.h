@class MMImagePickerReportInfo;

@interface MMImagePickerControllerPreviewReportObject : MMObject

@property (nonatomic) unsigned int m_previewCount;
@property (retain, nonatomic) MMImagePickerReportInfo *reportInfo;

- (void)reportPreviewWithScene:(int)a0;
- (void)increasePreviewCount;
- (void)reportPicerReportInfo;
- (void)reportPickerActionInfo;
- (void).cxx_destruct;

@end
