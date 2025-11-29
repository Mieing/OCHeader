@class NSString, PasskeyCreateLogic, PreEnterShowCreatePasskeyEntryConfig;

@interface PreEnterShowCreatePasskeyEntryStep : PreEnterBaseStep <PasskeyCreateDelegate>

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) PreEnterShowCreatePasskeyEntryConfig *config;
@property (retain, nonatomic) PasskeyCreateLogic *passkeyLogic;
@property (copy, nonatomic) NSString *reportSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsg:(id)a0;
- (id)configWithContent:(id)a0;
- (void)startStep;
- (void)reportPageClickButtonType:(int)a0;
- (void).cxx_destruct;

@end
