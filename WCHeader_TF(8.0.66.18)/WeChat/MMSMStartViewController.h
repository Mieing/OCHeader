@class NSString, UIImageView;

@interface MMSMStartViewController : MMSMBaseViewController <MMSafeModeMgrExt> {
    UIImageView *m_logoView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startupFirstRun;
- (void)layoutViews;
- (void)onNextButtonClicked:(id)a0;
- (void)onReportAndUpdateConfigFinished;
- (void).cxx_destruct;

@end
