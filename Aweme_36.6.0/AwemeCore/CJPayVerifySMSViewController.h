@class CJPayVerifySMSHelpModel, NSTimer, NSString, CJPayStyleErrorLabel, CJPayBDCreateOrderResponse, CJPayDefaultChannelShowConfig, CJPayBaseVerifyManager, UILabel, CJPayVerifySMSInputModule;
@protocol CJPayTrackerProtocol;

@interface CJPayVerifySMSViewController : CJPayFullPageBaseViewController <CJPayVerifySMSInputModuleDelegate, CJPayVerifySMSVCProtocol, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) long long countDown;
@property (weak, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayVerifySMSInputModule *inputModule;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (nonatomic) BOOL sendSMSLock;
@property (nonatomic) unsigned long long trackerInputTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (nonatomic) BOOL needSendSMSWhenViewDidLoad;
@property (copy, nonatomic) NSString *verifySource;
@property (retain, nonatomic) CJPayVerifySMSHelpModel *helpModel;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (copy, nonatomic) id /* block */ completeBlock;

- (id)commonTrackParams;
- (void)trackWithEventName:(id)a0 params:(id)a1;
- (void)updateTips:(id)a0;
- (void)updateErrorText:(id)a0;
- (void)p_clearInputContent;
- (void)sendSMSWithCompletion:(id /* block */)a0;
- (void)p_applyStyle;
- (void)inputModule:(id)a0 completeInputWithText:(id)a1;
- (void)inputModule:(id)a0 textDidChange:(id)a1;
- (id)p_attributedDesc:(id)a0;
- (void)timerSelector;
- (void)p_setupUI;
- (void)clearInput;
- (void).cxx_destruct;
- (void)invalidate;
- (void)startLoading;
- (void)reset;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)fire;
- (void)back;

@end
