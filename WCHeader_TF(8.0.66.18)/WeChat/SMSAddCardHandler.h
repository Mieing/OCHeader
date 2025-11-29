@class NSString, NSURL, BlockViewController;

@interface SMSAddCardHandler : MMObject <BlockViewControllerDelegate, PBMessageObserverDelegate, IPreEnterWechatLogicExt> {
    NSURL *_infoUrl;
    BlockViewController *_blockView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startCheckAndAddCard:(id)a0;
- (void)cancelCheckAndAddCard;
- (void)onPreEnterWechatDone;
- (void)createWechatSMSAddCard;
- (void)handleSMSAddCard:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onBlockViewControllerReturn;
- (void).cxx_destruct;

@end
