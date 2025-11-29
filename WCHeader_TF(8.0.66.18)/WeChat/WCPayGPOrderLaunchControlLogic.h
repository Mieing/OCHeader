@class CContact, NSString, NSMutableArray, WCPayGPLaunchControlLogic;
@protocol WCPayGPOrderLaunchControlLogicDelegate;

@interface WCPayGPOrderLaunchControlLogic : WCPayControlLogic <SessionSelectControllerDelegate, WCPayGPLaunchControlLogicDelegate>

@property (weak, nonatomic) id<WCPayGPOrderLaunchControlLogicDelegate> orderLaunchDelegate;
@property (retain, nonatomic) WCPayGPLaunchControlLogic *launchLogic;
@property (nonatomic) BOOL bHasSelectMemberFinish;
@property (retain, nonatomic) NSMutableArray *recentGroupPayContactList;
@property (retain, nonatomic) CContact *currentContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithData:(id)a0 orderContact:(id)a1;
- (void)setupData;
- (void)setGroupPayOrderLaunchDelegate:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (id)sectionTitleForBizChatSession;
- (long long)numberOfRowInBizChatSession;
- (id)contactInBizChatSessionAtRow:(unsigned long long)a0;
- (void)contactInBizChatDidSelect:(id)a0;
- (void)onLaunchControlLogicStop;
- (void).cxx_destruct;

@end
