@class NSString, NSMutableDictionary;
@protocol OpenIMContactVerifyLogicDelegate;

@interface OpenIMContactVerifyLogic : NSObject <PBMessageObserverDelegate, IOpenImContactMgrExt> {
    NSMutableDictionary *m_dicWaitingCGIWrap;
}

@property (weak, nonatomic) id<OpenIMContactVerifyLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startVerifyContact:(id)a0 opcode:(unsigned int)a1 verifyMsg:(id)a2 spamContext:(id)a3;
- (void)onOpenImGetContactDone:(id)a0 contact:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
