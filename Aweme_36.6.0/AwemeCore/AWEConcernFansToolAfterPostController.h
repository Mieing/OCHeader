@class NSString, AWEConcernNoticeWindow, AWEConcernFansToolNoticeViewModel;

@interface AWEConcernFansToolAfterPostController : NSObject <AWEConcernNoticeDelegate>

@property (retain, nonatomic) AWEConcernNoticeWindow *window;
@property (nonatomic) BOOL canShowNoticeViewFlowCount;
@property (retain, nonatomic) AWEConcernFansToolNoticeViewModel *noticeViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__showWindowWithAwemeModel:(id)a0;
- (void)cancelAutoDismiss;
- (id)__trackEnterFrom;
- (void)didManualClose;
- (void)trackWithWindowShow:(id)a0;
- (void)didNoticeHandled:(id)a0;
- (void)showNoticeViewWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)didDismiss;

@end
