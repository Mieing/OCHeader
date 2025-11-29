@class MMWormhole, NSString, NSSet;
@protocol WXKeyBoardActiveReceiver;

@interface WXKeyBoardMgr : MMUserService <MMServiceProtocol> {
    void *_sharedFile;
}

@property (readonly, nonatomic, getter=isFunctionOn) BOOL functionOn;
@property (retain, nonatomic) MMWormhole *wormhole;
@property (weak, nonatomic) id<WXKeyBoardActiveReceiver> receiver;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSSet *supportMessageTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFilePath;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)setActiveReceiver:(id)a0;
- (BOOL)isInstalled;
- (unsigned int)installState;
- (void)handleRequireAbility:(id)a0;
- (void)handleCommunicateData:(id)a0;
- (void)handleMessageAction:(id)a0;
- (void)handleSnsAction:(id)a0;
- (id)getContext;
- (void)syncSharedFile;
- (void)onInputModeDidChange:(id)a0;
- (void).cxx_destruct;

@end
