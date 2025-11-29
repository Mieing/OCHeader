@class OpenApiParameter, NSString;

@interface ChooseInvoiceHandler : MMObject <WCCardChooseViewControllerDelegate, IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelChooseInvoice;
- (void)startChooseInvoice:(id)a0;
- (void)cancelHandleAndReturn3rdApp:(int)a0 importInfo:(id)a1;
- (void)onPreEnterWechatDone;
- (void)chooseInvoice;
- (void)onChooseSuccess:(id)a0;
- (void)onChooseCancel;
- (void).cxx_destruct;

@end
