@class NSString, NSMutableArray;
@protocol AutoTranslateMsgDelegate;

@interface AutoTranslateMsgControllerV2 : MMObject <ITranslateMsgMgrExt, BaseMsgViewControllerExt, IMsgExt>

@property (retain, nonatomic) NSMutableArray *currentTranslatingMsgs;
@property (nonatomic) unsigned long long translatingMsgsCount;
@property (nonatomic) BOOL bStopTranslateFlag;
@property (weak, nonatomic) id<AutoTranslateMsgDelegate> delegate;
@property (retain, nonatomic) NSString *chatName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startAutoTranslate;
- (void)stopAutoTranslate;
- (void)autoTranslateNextBatchMsg;
- (void)onTranslateMessageFailed:(id)a0 errTip:(id)a1;
- (void)onTranslateMessageChanged:(id)a0;
- (void)onTranslateMessageWillHandleResponse;
- (void)onExitBaseMsgSession:(id)a0;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void).cxx_destruct;

@end
