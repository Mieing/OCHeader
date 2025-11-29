@class NSString, NSArray, ForwardMessageLogicController, EcsShareToContactEventCallback, WAShareAppMessageThumbImagePool, UIView, CMessageWrap;

@interface EcsShareToContactLogic_Base : NSObject <ForwardMessageLogicDelegate>

@property (retain, nonatomic) WAShareAppMessageThumbImagePool *thumbImagePool;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSArray *toContacts;
@property (retain, nonatomic) EcsShareToContactEventCallback *cb;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)share:(id)a0 withExtraData:(id)a1 toContacts:(id)a2 callback:(id)a3 fromView:(id)a4;
+ (id)generateKey;

- (void)genMessage:(id /* block */)a0;
- (id)initWithParams:(id)a0 extraData:(id)a1;
- (void)share;
- (void)loadNetImg:(id)a0 callback:(id /* block */)a1;
- (id)checkCanShow;
- (void)onSuc:(id)a0;
- (void)onCancel;
- (void)onFail:(id)a0;
- (void)bindToView;
- (void)clear;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void).cxx_destruct;

@end
