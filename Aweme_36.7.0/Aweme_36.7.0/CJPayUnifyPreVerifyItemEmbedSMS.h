@class CJPayTimer, CJPayUnifyPreVerifySMSView, NSString;

@interface CJPayUnifyPreVerifyItemEmbedSMS : CJPayUnifyPreVerifyItemBase <CJPaySMSInputViewDelegate>

@property (retain, nonatomic) CJPayUnifyPreVerifySMSView *smsView;
@property (retain, nonatomic) CJPayTimer *timer;
@property (nonatomic) BOOL isSendedSMS;
@property (nonatomic) BOOL isFirstInputSMSCode;
@property (nonatomic) BOOL isAutoFillInputCode;
@property (nonatomic) double inputCompleteTimeStamp;
@property (nonatomic) long long smsInputCompleteTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)checkType;
- (id)checkTypeName;
- (void)didAutoFillInputSMSCode:(id)a0;
- (void)didInputFirstSMSCode;
- (void)didFinishInputSMS:(id)a0;
- (void)didDeleteLastSMS;
- (BOOL)handleConfirmResponse:(id)a0;
- (id)buildPreVerifyViewWithParams:(id)a0 inputCompletionBlock:(id /* block */)a1;
- (void)startVerifyWithParams:(id)a0;
- (BOOL)isEmbed;
- (void)trackForVerifyResult:(id)a0;
- (void)p_postSMS;
- (void)p_postSMSCode:(id /* block */)a0 failure:(id /* block */)a1;
- (void)p_updateErrorText:(id)a0;
- (id)p_defineButtonInfoActions;
- (id)p_buildParamsWithInputStr:(id)a0;
- (id)p_sceneStr;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)verifyType;

@end
