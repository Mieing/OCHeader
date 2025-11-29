@interface WCFinderBulletCommentReporter : NSObject

+ (void)exposureWithItems:(id)a0 contentTid:(id)a1 startTime:(double)a2 commentScene:(int)a3;
+ (id)_reportBsListParams:(id)a0;
+ (void)postSuccessWithComment:(id)a0 contentVM:(id)a1 isLandscape:(BOOL)a2 commentScene:(int)a3;
+ (void)enabledEventWithEnabled:(BOOL)a0 isLandscape:(BOOL)a1 commentScene:(int)a2 contentVM:(id)a3;
+ (void)popUpMenuWithEvent:(id)a0 isLandscape:(BOOL)a1 action:(unsigned long long)a2 bulletItem:(id)a3 commentScene:(int)a4 contentVM:(id)a5;
+ (void)actionSheetMenuWithEvent:(id)a0 action:(unsigned long long)a1 bulletItem:(id)a2 commentScene:(int)a3 contentTid:(id)a4;
+ (id)_bulletReportInfoWithItem:(id)a0;
+ (id)_generalParametersWithContentVM:(id)a0 isLandscape:(BOOL)a1;
+ (id)_actionOptionsStringWithAction:(unsigned long long)a0;
+ (double)_playPercentForContentVM:(id)a0;

@end
