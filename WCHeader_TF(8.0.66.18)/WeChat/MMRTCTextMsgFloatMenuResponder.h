@class ForwardMessageLogicController, NSString, CMessageWrap;

@interface MMRTCTextMsgFloatMenuResponder : MMRTCMenuResponder <ForwardMessageLogicDelegate>

@property (retain, nonatomic) ForwardMessageLogicController *forwardLogicController;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMsgWrap;
- (id)originMenuItems;
- (id)getSelectMenuItem;
- (void)onTranslateText;
- (void)onSelectTextForward:(id)a0;
- (void)onSelectTextCopy:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void).cxx_destruct;

@end
