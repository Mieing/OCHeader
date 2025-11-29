@class OpenApiParameter, NSString;

@interface ChooseCardHandler : MMObject <WCCardChooseViewControllerDelegate, IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelChooseCard;
- (void)startChooseCard:(id)a0;
- (void)cancelHandleAndReturn3rdApp:(int)a0 importInfo:(id)a1;
- (void)onPreEnterWechatDone;
- (void)chooseCard;
- (void)onChooseSuccess:(id)a0;
- (void)onChooseCancel;
- (void).cxx_destruct;

@end
