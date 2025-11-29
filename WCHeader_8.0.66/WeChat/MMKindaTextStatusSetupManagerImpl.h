@class TextStateBrandLogic, NSString, MMUIViewController, MMVoidBoolStringCallback;

@interface MMKindaTextStatusSetupManagerImpl : NSObject <TextStateBrandLogicDelegate, MMKindaTextStatusSetupManager>

@property (retain, nonatomic) MMVoidBoolStringCallback *callback;
@property (retain, nonatomic) TextStateBrandLogic *brandLogic;
@property (weak, nonatomic) MMUIViewController *currentViewController;
@property (retain, nonatomic) NSString *transId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTextStatusImpl:(id)a0 transId:(id)a1 mktSign:(id)a2 payscene:(int)a3 finishCallback:(id)a4;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithIconId:(id)a0 iconDescription:(id)a1;
- (void)textStatusDataReportWithScene:(int)a0;
- (void).cxx_destruct;

@end
