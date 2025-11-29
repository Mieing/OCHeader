@class OpenApiParameter, NSString;

@interface WeAppTransferAPIHandler : MMObject <IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandle:(id)a0;
- (void)doLogic;
- (id)generateURLStringWithTicket:(id)a0;
- (void)onPreEnterWechatDone;
- (void).cxx_destruct;

@end
