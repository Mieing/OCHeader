@class NSString, CMessageWrap, AutoTranslateMsgReport, NSMutableArray;
@protocol AutoTranslateMsgDelegate;

@interface AutoTranslateMsgController : MMObject <IAutoTranslateMsgExt, ITranslateMsgMgrExt>

@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL bStopTranslateFlag;
@property (retain, nonatomic) CMessageWrap *currentMsgWrap;
@property (retain, nonatomic) AutoTranslateMsgReport *report;
@property (retain, nonatomic) NSMutableArray *autoTranslateQueue;
@property (weak, nonatomic) id<AutoTranslateMsgDelegate> delegate;
@property (retain, nonatomic) NSString *chatName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)Reset;
- (id)currentTranslatingMsg;
- (void)stopAutoTranslate;
- (void)completeLastAutoProcess;
- (void)handleAutoTranslateNext;
- (BOOL)canAutoTranslateMsg:(id)a0;
- (BOOL)checkMsgExist:(unsigned int)a0;
- (long long)getMsgIndexWithLocalId:(unsigned int)a0 viewModels:(id)a1;
- (void)OnAutoTranslateMsgStart:(id)a0;
- (void)OnAutoTranslateMsgEnd:(id)a0;
- (void)OnAutoTranslateMsgFail:(id)a0;
- (void)OnAutoTranslateMsgStop:(id)a0;
- (void)onTranslateMessageFailed:(id)a0 errTip:(id)a1;
- (void)onTranslateMessageChanged:(id)a0;
- (void).cxx_destruct;

@end
