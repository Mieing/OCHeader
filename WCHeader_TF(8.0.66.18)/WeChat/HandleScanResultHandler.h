@class NSString, GetA8KeyLogic;

@interface HandleScanResultHandler : BaseOpenSDKHandler <GetA8KeyLogicDelegate> {
    GetA8KeyLogic *_geta8KeyLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)realHandleReqAfterermissionValidation;
- (id)getExtTaransLinkParams;
- (id)getScanResult;
- (BOOL)handleProlieScanResult:(id)a0;
- (void).cxx_destruct;

@end
