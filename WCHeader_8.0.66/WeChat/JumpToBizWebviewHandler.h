@class OpenApiParameter, NSString;

@interface JumpToBizWebviewHandler : MMObject <IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startJumpToBizWebview:(id)a0;
- (void)onPreEnterWechatDone;
- (void)createWechatJumpToBizWebview;
- (void)cancelJumpToBizWebview;
- (void).cxx_destruct;

@end
