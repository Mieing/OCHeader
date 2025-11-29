@class AWEPublishBaseTask, NSString, DUXContentSheet;

@interface AFDProfileSchoolExtensionAlert : NSObject <DUXSheetDelegate, AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) DUXContentSheet *alertSheet;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAlertSheetWithVC:(id)a0 Height:(double)a1;

- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)forcePopup;
- (void).cxx_destruct;

@end
