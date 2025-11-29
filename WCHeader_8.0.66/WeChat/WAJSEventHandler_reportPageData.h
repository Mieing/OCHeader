@class NSString;

@interface WAJSEventHandler_reportPageData : WAJSEventHandler_BaseEvent <IReportMiniProgramDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onReportSuccess:(long long)a0;
- (void)onReportFail:(id)a0;

@end
