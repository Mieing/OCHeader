@class NSString, OpenApiParameter, WCCardAddHelper;

@interface AppAddCardHandler : MMObject <WCCardAddHelperDelegate, IPreEnterWechatLogicExt> {
    NSString *_cardID;
    OpenApiParameter *_parameter;
    WCCardAddHelper *_addHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCheckAndAddCard:(id)a0;
- (void)onPreEnterWechatDone;
- (void)cancelCheckAndAddCard;
- (void)createWechatAppAddCard;
- (void)cancelHandleAndReturn3rdApp:(int)a0 importInfo:(id)a1;
- (id)getViewController;
- (void)onAddSuccess:(id)a0;
- (void)onAddFail:(id)a0;
- (void)onAddCancel;
- (void).cxx_destruct;

@end
