@class UIButton, NSString, NSArray, NSObject, MMUILabel;
@protocol WCDBSpecifiedRecoverViewControllerDelegate;

@interface WCDBSpecifiedRecoverViewController : MMWindowViewController <WCActionSheetDelegate> {
    MMUILabel *m_tipLabel;
    MMUILabel *m_commentLabel;
    UIButton *m_button;
    UIButton *m_clear;
    BOOL m_isRecovering;
    NSArray *m_recoverInfo;
}

@property (weak, nonatomic) NSObject<WCDBSpecifiedRecoverViewControllerDelegate> *delegate;
@property (nonatomic) BOOL isManuallyRestore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onEnterBackground;
- (void)onDoubleTapThreeTimes;
- (void)onConfirm;
- (void)didRecover:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)recover;
- (void)clear;
- (void)askForConfirmClear;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
