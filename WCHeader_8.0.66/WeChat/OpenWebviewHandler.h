@class OpenApiParameter, NSString;

@interface OpenWebviewHandler : MMObject <IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandleWithOpenParam:(id)a0;
- (void)doOpenWebview;
- (id)translateToInternalWebviewUrlString;
- (id)encodeUrl:(id)a0;
- (void)onPreEnterWechatDone;
- (void).cxx_destruct;

@end
