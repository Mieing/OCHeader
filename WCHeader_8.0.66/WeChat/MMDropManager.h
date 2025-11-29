@class NSString, CContact, ForwardMessageLogicController;
@protocol MMDropDelegate;

@interface MMDropManager : NSObject <ForwardMessageLogicDelegate, UIDropInteractionDelegate> {
    ForwardMessageLogicController *m_forwardLogicController;
}

@property (retain, nonatomic) CContact *m_contact;
@property (weak, nonatomic) id<MMDropDelegate> dropDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDropItems:(id)a0;
- (BOOL)isValidContactForDrop:(id)a0;
- (id)getSavePathWithFileSuffix:(id)a0;
- (void)showConfirmView:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)getCurrentViewController;
- (id)imageMsgWith:(id)a0;
- (id)videoMsgWith:(id)a0;
- (void).cxx_destruct;

@end
