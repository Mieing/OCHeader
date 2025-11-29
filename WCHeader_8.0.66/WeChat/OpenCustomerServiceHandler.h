@class NSString;

@interface OpenCustomerServiceHandler : BaseOpenSDKHandler

@property (copy, nonatomic) NSString *wwkfUrl;
@property (copy, nonatomic) NSString *corpid;

- (void)startHandler:(id)a0;
- (void)cancelHandler;
- (void)realHandleReqAfterermissionValidation;
- (id)getExtTaransLinkParams;
- (void)sendRespAndReturnTo3rdApp:(id)a0 errCode:(int)a1;
- (void)backTo3rdApp:(int)a0 extMsg:(id)a1;
- (void).cxx_destruct;

@end
