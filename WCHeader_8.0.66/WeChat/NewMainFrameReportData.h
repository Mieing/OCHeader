@interface NewMainFrameReportData : MMObject

+ (void)ReportMainFrameLeftSlideOption:(unsigned int)a0 andSession:(id)a1;
+ (void)ReportMainFrameLeftSlideOption:(unsigned int)a0 andSession:(id)a1 guideOption:(long long)a2;
+ (void)ReportMainFrameLeftSlideOption:(unsigned int)a0 andSession:(id)a1 guideOption:(long long)a2 lastOpTime:(unsigned long long)a3;
+ (void)ReportLeftSlideSetSessionUnRead:(id)a0;
+ (void)ReportLeftSlideSetSessionRead:(id)a0;
+ (void)ReportLeftSlideSessionDelete:(id)a0 isConfirmed:(BOOL)a1;
+ (void)ReportLeftSlideSessionUnfollow:(id)a0;
+ (void)ReportLeftSlideSessionHide:(id)a0 isConfirmed:(BOOL)a1 hasGuideView:(BOOL)a2;
+ (void)ReportLeftSlideSessionMenuAppear:(id)a0;
+ (void)ReportDelayDeleteSessionAppear:(id)a0;
+ (void)ReportCancelDeleteSession:(id)a0 deleteTime:(unsigned long long)a1;

@end
