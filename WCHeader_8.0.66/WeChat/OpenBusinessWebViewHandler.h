@class OpenApiParameter, NSString;

@interface OpenBusinessWebViewHandler : MMObject <IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (nonatomic) unsigned int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandleWithOpenParam:(id)a0;
- (void)doOpenWebview;
- (id)translateToInternalWebviewUrlString;
- (void)onPreEnterWechatDone;
- (void).cxx_destruct;

@end
