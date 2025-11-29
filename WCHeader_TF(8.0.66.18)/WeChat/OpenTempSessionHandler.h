@class OpenApiParameter, NSString;

@interface OpenTempSessionHandler : MMObject <IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandleWithParamter:(id)a0;
- (void)doOpenTempSession;
- (id)translateToInternalTempSessionUrlString;
- (void)onPreEnterWechatDone;
- (void).cxx_destruct;

@end
