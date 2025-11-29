@class HTSLiveApi, NSMutableDictionary, NSString;

@interface IESLiveTextCorrectionServiceIMP : IESLiveGeneralBaseService <IESLiveTextCorrectionService>

@property (retain, nonatomic) HTSLiveApi *textCorrectionApi;
@property (retain, nonatomic) NSMutableDictionary *correctionDic;
@property (nonatomic) unsigned long long addLinkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)judgeInputInTextView:(id)a0;
- (void)showHintBubbleInSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextView:(id)a1 onContainerView:(id)a2 atTop:(BOOL)a3 textDidReplaced:(id /* block */)a4;
- (id)textCorrectionSchema;
- (void)trackCorrectionShow;
- (void)trackCorrectionWithAction:(id)a0 originalWord:(id)a1 replaceWord:(id)a2;
- (void)judgeLastCorrectionHintWithTextView:(id)a0;
- (void)requestTextCorrectionApiWithTextView:(id)a0;
- (void)markWordsShouldCorrect:(id)a0 inTextView:(id)a1;
- (void).cxx_destruct;
- (void)ignoreWord:(id)a0;

@end
