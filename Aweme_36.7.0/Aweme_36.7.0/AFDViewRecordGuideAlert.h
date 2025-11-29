@class NSString, AWEAwemeModel;

@interface AFDViewRecordGuideAlert : NSObject <AWEAlertProtocol, AFDViewerRecordGuideViewAlertProtocol>

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)updateReferString:(id)a0 aweme:(id)a1;
- (void).cxx_destruct;
- (void)trigger;

@end
