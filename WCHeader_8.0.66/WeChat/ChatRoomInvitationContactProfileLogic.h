@class NSString, CContact, CMessageWrap;
@protocol MMUIViewControllerDelegate;

@interface ChatRoomInvitationContactProfileLogic : NSObject <WeixinContactInfoExt, OpenIMContactInfoExt>

@property (retain, nonatomic) CContact *roomContact;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> delegate;
@property (retain, nonatomic) CMessageWrap *currentInvitationMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomContact:(id)a0 delegate:(id)a1;
- (void)openContactProfile:(id)a0 fromInvitationMsg:(id)a1;
- (id)updateContactsAndGetInviterContactForInvitationMsg:(id)a0;
- (void)onCheckDisableAllOperation:(id)a0 Disable:(BOOL *)a1;
- (void).cxx_destruct;

@end
